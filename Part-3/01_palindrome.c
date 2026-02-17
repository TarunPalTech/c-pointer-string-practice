/* 1. Write a program to check whether a given string is palindrome or not. */

int isPalindrome(const char *p){
    if(!p) return -1;
    
    int len = strlen(p);
    
    if(len==0 || len==1) return 1;
    
    const char *start = p, *end = p + len - 1;
    
    while(start<end){
        if(*start!=*end) return 0;
        start++;
        end--;
    }
    return 1;
}