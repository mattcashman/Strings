#include "str.h"
#include <stddef.h> /*for size t*/
#include <assert.h>  

size_t Str_getLength(const char pcSrc[])
{
    size_t i = 0;
    assert(pcSrc != NULL);
    while (pcSrc[i] != '\0'){
        i++;
    }
    return i;
}

char* str_copy(char pcDest[], const char pcSrc[])
{
    size_t i = 0;
    assert(pcDest != NULL && pcSrc != NULL);
        while (pcSrc[i] != '\0'){
        pcDest[i] = pcSrc[i];
        i++;
    }
    pcDest[i] = '\0';
    return pcDest;
}

char* str_concat(char pcDest[], const char pcSrc[]){
    size_t dest_len = Str_getlength(pcDest);
    size_t j = 0;
    assert(pcDest != NULL && pcSrc != NULL);

    while (pcSrc[j] != '\0'){
        pcDest[dest_len + j] = pcSrc[j];
        j++;
    }
    pcDest[dest_len + j] = '\0';
    return pcDest;
}

int str_compare(const char pcS1[], const char pcS2[]) {
    size_t i = 0;
    assert(pcS1 != NULL && pcS2 != NULL);

    while (pcS1[i] != '\0' && pcS2[i] != '\0'){
        if (pcS1[i] != pcS2[i]) {      
            return (unsigned char)pcS1[i] - (unsigned char)pcS2[i];
        }
        i++;
    }
    return (unsigned char)pcS1[i] - (unsigned char)pcS2[i];
}

char* str_search(const char pcHaystack[], const char pcNeedle[])
{
    size_t needle_length = str_getlength(pcNeedle);
    size_t i = 0;
    size_t j = 0;
    assert(pcHaystack != NULL && pcNeedle != NULL);

    if (pcNeedle[0] == '\0') {
        return (char*)pcHaystack;
    }
    for ( i = 0; pcHaystack[i] != '\0'; i++) {
        if (pcHaystack[i] == pcNeedle[0]) {
            for (j = 0; j < needle_length; j++) {
                if (pcHaystack[i + j] != pcNeedle[j]) {
                    break;
                }
            }
            if (j == needle_length)
            {
                return (char*)&pcHaystack[i];
            }
        }
    }
    return NULL;
}



