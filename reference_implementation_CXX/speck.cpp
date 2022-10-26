/**
 * @brief Reference implementation of of SPECK 64/128.
 * @copyright Virginia Tech & University of Passau
 */

#include <cinttypes> // PRIu64
#include <cstdio> // printf

#define PRINT_EACH_ROW 1

// Rotate right
#define ROR(x, r) ((x >> r) | (x << (64 - r)))
// Rotate left
#define ROL(x, r) ((x << r) | (x >> (64 - r)))
// Round function
#define R(x, y, k) (x = ROR(x, 8), x += y, x ^= k, y = ROL(y, 3), y ^= x)

#define ROUNDS 32
void encrypt(uint64_t cyptherText[2], uint64_t const plainText[2], uint64_t const K[2]);


int main() {
    // Write C code here
    uint64_t cyphertext[2] = {0, 0};

    uint64_t const plaintext[2] = {0b0100011100101101010010110110000101010000011001000101001101100111,
                                   0b1100111100010110100010001011001111111011110001000000110000010011};
    uint64_t const key[2] =       {0b0111010100110111011110000010000101000001001001010100010000101010,
                                   0b0100011100101101010010110110000101010000011001000101001101100111};
    encrypt(cyphertext, plaintext, key);
    printf("Res PlainText: %" PRIu64 " %" PRIu64 "\n", cyphertext[0], cyphertext[1]);
    return 0;
}

void printCurrentState(uint64_t p0, uint64_t p1, uint64_t k0, uint64_t k1)
{
#ifdef PRINT_EACH_ROW
    printf("Row 0 p0: %" PRIu64 " p1: %" PRIu64 " k0: %" PRIu64 "k1: %" PRIu64 "\n", p0, p1, k0, k1);
#endif // PRINT_EACH_ROW
}

void encrypt(uint64_t cyptherText[2], uint64_t const plainText[2], uint64_t const key[2])
{
    uint64_t p0 = plainText[0], p1 = plainText[1], k0 = key[0], k1 = key[1];

    R(p1, p0, k0);
    printCurrentState(p0, p1, k0, k1);
    for (int round_ctr = 0; round_ctr < ROUNDS - 1; round_ctr++)
    {
        R(k1, k0, round_ctr);
        R(p1, p0, k0);
        printCurrentState(p0, p1, k0, k1);
    }

    cyptherText[0] = p0;
    cyptherText[1] = p1;
}