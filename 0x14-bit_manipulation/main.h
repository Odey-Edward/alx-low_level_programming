#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
void _putchar(char c);

#endif