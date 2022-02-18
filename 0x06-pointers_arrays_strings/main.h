#ifndef MAIN_h
#define MAIN_H

/*
 * File: main.h
 *
 * Desc: Header file containing declarations for all functions
 *       used in the 0x06-pointers_arrays_strings
 */

#include <stdlib.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *n);
void reverse_array(int *a, int n);
char *cap_string(char *);
char *leet(char *);
char *_strcpy(char *dest, char *src);

#endif
