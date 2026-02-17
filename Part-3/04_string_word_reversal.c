/* 4. Write a function to reverse string word wise, (for example, if the string is "Tarun Pal") then the resulting string  should be "Pal Tarun". */

int reverseStringWordWise(char *p){
    if(!p) return 0;
    
    int len = strlen(p);
    
    if(len == 0 || len == 1) return 1;
    
    char *start = p, *end = p + len - 1;
    
    reverseString(start, end);
    
    while(*start){
        while(*start==' ') start++;
        
        if(!*start) return 1;
        
        end = start;
        
        while(*end && *end!=' ') end++;
        
        reverseString(start, end-1);
        
        start = end;
    }
    
    return 1;
}

void reverseString(char *p, char *q){
    while(p<q){
        char temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
}