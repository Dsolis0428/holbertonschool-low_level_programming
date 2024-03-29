#ifndef MAIN_h
#define MAIN_H

/*
 * File: main.h
 *
 * Desc: Header file containing declarations for all functions
 *       used in the 0x06-pointers_arrays_strings
 */

#include <stdlib.h>

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *n);
char *leet(char *n);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
int _putchar(char c);
#endif
