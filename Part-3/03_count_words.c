/* 3. Write a function to count words in a given string. */

int countWords(const char *p){
    if(!p) return -1;
    
    int count = 0;
    
    while(*p){
        while(*p == ' ') p++;
        
        if(!*p) break;
        
        count++;
        
        while(*p && *p!=' ') p++;
    }
    
    return count;
}
