/* 1. Write a program to calculate length of the string. */

int calculateLength(char *p){
    if(!p) return -1;
    
    char *start = p;
    
    while(*p && *p!='\n') p++;
    
    return p-start;
}