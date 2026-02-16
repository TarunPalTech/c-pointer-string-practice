/* 2. Write a program to check whether a given string is an alphanumeric string or not. */

int isAlphanumeric(char *p){
    if(!p) return -1;
    
    int alpha=0, num=0;
    
    while(*p){
        if(alpha && num) return 1;
        if(*p>='0' && *p<='9') num=1;
        else{
            char ch = tolower((unsigned char)*p);
            if(ch>='a' && ch<='z') alpha=1;
        }
        p++;
    }
    return 0;
}