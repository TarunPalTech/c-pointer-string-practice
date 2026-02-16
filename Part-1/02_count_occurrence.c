/* 2. Write a program to count the occurrence of a given character in a given string.(Case Insensitive)  */

#include <ctype.h>

int countOccurrence(const char *p, char ch){
    if(!p) return -1;

    int count = 0;
    char target = tolower((unsigned char)ch);

    while(*p){
        if(tolower((unsigned char)*p) == target)
            count++;
        p++;
    }

    return count;
}
