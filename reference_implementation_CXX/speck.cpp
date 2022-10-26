#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#define ROR(x, r) ((x >> r) | (x << (64 - r)))
#define ROL(x, r) ((x << r) | (x >> (64 - r)))
#define R(x, y, k) (x = ROR(x, 8), x += y, x ^= k, y = ROL(y, 3), y ^= x)
#define ROUNDS 32
void encrypt(uint64_t ct[2], uint64_t const pt[2], uint64_t const K[2]);


int main() {
    // Write C code here
    uint64_t cyphertext[2] = {0, 0};
    uint64_t const plaintext[2] = {0100011100101101010010110110000101010000011001000101001101100111, 1100111100010110100010001011001111111011110001000000110000010011};
    uint64_t const key[2] = {0111010100110111011110000010000101000001001001010100010000101010, 0100011100101101010010110110000101010000011001000101001101100111};
    encrypt(cyphertext, plaintext, key);
    printf("%" PRIu64 "\n", cyphertext[0]);
    printf("%" PRIu64 "\n", cyphertext[1]);
    return 0;
}

void encrypt(uint64_t ct[2], uint64_t const pt[2], uint64_t const K[2]) {
   uint64_t y = pt[0], x = pt[1], b = K[0], a = K[1];

   R(x, y, b);
   for (int i = 0; i < ROUNDS - 1; i++) {
      R(a, b, i);
      R(x, y, b);
   }

   ct[0] = y;
   ct[1] = x;
}