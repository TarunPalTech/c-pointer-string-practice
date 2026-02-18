/* 9. Write a function to make acronym name from a given name. For example, "Ramesh Chandra Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta" */

int makeNameAcronym(char *str){
    if(!str) return 0;
    
    char *lastWord = str;
    char *p = str;
    
    // finding last word...
    while(*p){
        while(*p && isspace((unsigned char)*p)) p++;
        
        if(*p) lastWord = p;
        
        while(*p && !isspace((unsigned char)*p)) p++;
    }
    
    char *write = str;
    p = str;
    
    // making name acronym...
    while(*p){
        while(*p && isspace((unsigned char)*p)) p++;

        if(!*p) break;
        
        if(p == lastWord){
            while(*p && !isspace((unsigned char)*p)){
                *write++ = *p++;
            }
        }else{
            *write++ = toupper((unsigned char)*p);
            while(*p && !isspace((unsigned char)*p)) p++;
            *write++ = ' ';
        }
    }
    *write = '\0';

    return 1;
}