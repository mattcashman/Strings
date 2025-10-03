/*This is the array notation one */
#include "str.h" /**/
#include <stddef.h> /*for size t*/
#include <assert.h> /*for assert*/

size_t Str_getLength(const char pcSrc[])
{
    size_t i = 0;
    assert(pcSrc != NULL);
    while (pcSrc[i] != '\0'){
        i++;
    }
    return i;
}

char* Str_copy(char pcDest[], const char pcSrc[])
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

char* Str_concat(char pcDest[], const char pcSrc[]){
    size_t dest_len = Str_getLength(pcDest);
    size_t j = 0;
    assert(pcDest != NULL && pcSrc != NULL);

    while (pcSrc[j] != '\0'){
        pcDest[dest_len + j] = pcSrc[j];
        j++;
    }
    pcDest[dest_len + j] = '\0';
    return pcDest;
}

int Str_compare(const char pcS1[], const char pcS2[]) {
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

char* Str_search(const char pcHaystack[], const char pcNeedle[])
{
    size_t needle_length = Str_getLength(pcNeedle);
    size_t i, j;
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



