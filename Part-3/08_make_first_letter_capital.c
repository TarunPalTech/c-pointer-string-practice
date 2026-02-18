/* 8. Write a function to make first character of each word of the string capital. */

int capitalizeFirstLetter(char *p){
    if(!p) return 0;
    
    while(*p){
        while(isspace((unsigned char)*p)) p++;
        if(isalpha((unsigned char)*p)) *p = toupper((unsigned char)*p);
            
        while(*p && !isspace((unsigned char)*p)) p++;
    }
    return 1;
}