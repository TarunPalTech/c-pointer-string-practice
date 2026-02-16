/* 1. Write a function to compare two strings. */

int compareTwoStrings(char *p, char *q){
    while(*p && *q){
        if(*p!=*q) return (unsigned char)*p-(unsigned char)*q;
        p++;
        q++;
    }
    return (unsigned char)*p-(unsigned char)*q;
}