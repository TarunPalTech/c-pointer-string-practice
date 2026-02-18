/* 10. Write a function to concatenate two strings. */

int concatenateTwoStrings(const char *p, const char *q, char *result){
    
    if(!p || !q || ! result) return 0;
    
    int hasP = (*p!='\0');
    int hasQ = (*q!='\0');
    
    while(*p) *result++ = *p++;
    
    if(hasP && hasQ) *result++ = ' ';
    
    while(*q) *result++ = *q++;
    
    *result = '\0';
    
    return 1;
}