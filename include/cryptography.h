#ifndef CRYPTOGRAPHY_H
#define CRYPTOGRAPHY_H
#include <stdint.h>
#include <stddef.h>
void xor_encrypt(const uint8_t *input, uint8_t *output, size_t len, uint8_t key);
#endif