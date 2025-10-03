include "str.h"
include <assert.h>

size_t str_getlength(const char *pcSrc) {
    constant char* p = pcSrc;
    assert(*pcSrc != NULL);
    while (*p != '\0'){
        p++;
    }
    return (size_t)(p - pcSrc);
}

char* str_copy(char *pcDest, const char *pcSrc) {
    char* p1 = pcDest;
    assert(pcDest != NULL && pcSrc != NULL);
    while (*pcSrc != '\0'){
        *pcDest = *pcSrc;
        pcDest++;
        pcSrc++;
    }
    *pcDest = '\0';
    return p1;
}

char* str_concat(char *pcDest, const char *pcSrc) {
    char* p2 = pcDest;
    assert(pcDest != NULL && pcSrc != NULL);
    while (*pcDest != '\0'){
        pcDest++;
    }
    while (*pcSrc != '\0'){
        *pcDest++ = *pcSrc++;
    }
    *pcDest = '\0';
    return p2;
}

char* str_compare(char *pcDest, const char *pcSrc) {

    char* p3 = pcDest;
    assert(pcDest != NULL && pcSrc != NULL);
    while (*pcDest != '\0' && *pcSrc != '\0'){
        if (*pcDest != *pcSrc){
            return (unsigned char)*pcDest - (unsigned char)*pcSrc;
        }
        pcDest++;
        pcSrc++;
    }
}

char* str_search(const char *pcHaystack, const char *pcNeedle) {}
    constant char* a;
    constant char* a1;
    constant char* a2;
    constant char* a3;
    assert(pcHaystack != NULL && pcNeedle != NULL); 
    for (a = pcHaystack; *a != '\0'; a++){
        a1 = a;
        a2 = pcNeedle; 
        while (*a1 != '\0' && *a2 != '\0' && *a1 == *a2){
            a1++;
            a2++;
        }
        if (*a2 == '\0'){
            return (char*)a;
        }
    }
        return NULL;

