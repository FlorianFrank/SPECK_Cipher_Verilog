/**
 * @brief Reference implementation of of SPECK 64/128.
 * @copyright Virginia Tech & University of Passau
 */

#include <cinttypes> // PRIu64
#include <iostream>

// Rotate right
#define ROR(x, r) ((x >> r) | (x << (64 - r)))
// Rotate left
#define ROL(x, r) ((x << r) | (x >> (64 - r)))
// Round function
#define R(x, y, k) (x = ROR(x, 8), x += y, x ^= k, y = ROL(y, 3), y ^= x)

#define ROUNDS 32
void encrypt(uint64_t ct[2], uint64_t const pt[2], uint64_t const K[2]);


int main() {
    // Write C code here
    uint64_t cyphertext[2] = {0, 0};

    uint64_t const plaintext[2] = {0100011100101101010010110110000101010000011001000101001101100111,
                                   1100111100010110100010001011001111111011110001000000110000010011};
    uint64_t const key[2] = {0111010100110111011110000010000101000001001001010100010000101010,
                             0100011100101101010010110110000101010000011001000101001101100111};
    encrypt(cyphertext, plaintext, key);
    printf("%" PRIu64 "\n", cyphertext[0]);
    printf("%" PRIu64 "\n", cyphertext[1]);
    return 0;
}

void encrypt(uint64_t cyptherText[2], uint64_t const plainText[2], uint64_t const key[2]) {
   uint64_t p0 = plainText[0], p1 = plainText[1], k0 = key[0], k1 = key[1];

   R(p1, p0, k0);

   for (int i = 0; i < ROUNDS - 1; i++) {
      R(k1, k0, i);
      R(p1, p0, k0);
   }

    cyptherText[0] = p0;
    cyptherText[1] = p1;
}