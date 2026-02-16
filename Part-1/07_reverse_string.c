/* 7. Write a program to reverse a string. */

#include <string.h>

int reverseString(char *p){
    if(!p) return 0;

    int len = strlen(p);
    if(len == 0) return 1;

    char *start = p;
    char *end = p + len - 1;

    while(start < end){
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return 1;
}
