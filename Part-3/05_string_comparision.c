/* 5. Write a function to do case insensitive comparision of two strings. */

int caseInsensitiveComparision(const char *p, const char *q){
    while(*p && *q){
        char a = tolower((unsigned char)*p);
        char b = tolower((unsigned char)*q);
        if(a!=b) return a - b;
        p++;
        q++;
    }
    return tolower((unsigned char)*p) - tolower((unsigned char)*q);
}