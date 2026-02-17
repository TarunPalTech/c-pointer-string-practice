/* 2. Write a function to trim a string (removing leading spaces from both ends). */

int trimLeadingAndTrailingSpaces(char *p){
    if(!p) return 0;
    
    char *start = p;
    while(*start==' ') start++;
    
    if(*start=='\0'){
        *p='\0';
        return 1;
    }
    
    char *end = start + strlen(start) - 1;
    while(end>=start && *end== ' ') end--;
    *(end+1)='\0';
    
    while(*start){
        *p++=*start++;
    }
    *p='\0';
    
    return 1;
}