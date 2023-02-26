#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char *_strcat(char *dest, char *src);
char *_strcat1(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncat1(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strncpy1(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _strcmp1(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *c);
char *cap_string(char *str);
char *leet(char *str);
char *leet(char *);
char *rot13(char *str);
void print_number(int n);
int _putchar(char c);

#endif /* MAIN_H */
