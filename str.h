/*This program serves as the public API for both modules*/
#ifndef STR_H_INCLUDED
#define STR_H_INCLUDED

#include <stddef.h> /*for size t*/

/* All the functions below serve as the */
/* This function returns the length of the string pcsrc, (excluding the trailing '\0'.) */
size_t str_getlength(const char pcSrc[]);

/* This creates a copy including the trailing\0 into pcDest.*/
char* str_copy(char pcDest[], const char pcSrc[]);

/* This appends a copy of pcSrc (including the terminating '\0') to the end of pcDest.*/
char* str_concat(char pcDest[], const char pcSrc[]);

/* This function compares two strings. It returns an integer <,= or > than zero if pcS1 is \
found, to be less than, to match, or be greater than pcS2.*/
int str_compare(const char pcS1[], const char pcS2[]);

/*searches for the first occurance of pcneedle in pcHaystack, and returns a pointer
to first match in pcHaystack, or NULL if not found. or if Pcneedle is empty, return
(char*)pcHaystack. */
char* str_search(const char pcHaystack[], const char pcNeedle[]);

#endif /* STR_H_INCLUDED */
