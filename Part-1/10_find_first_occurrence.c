/* 10. Write a program to find first occurrence of a given character in a given string. */

#include <ctype.h>

int findFirstOccurrence(const char *p, const char ch){
    if(!p) return -1;

    char temp = tolower((unsigned char)ch);
    const char *start = p;

    while(*p){
        if(tolower((unsigned char)*p++) == temp)
            return (p - 1) - start;
    }

    return -1;
}
