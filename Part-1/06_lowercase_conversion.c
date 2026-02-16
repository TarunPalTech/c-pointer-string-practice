/* 6. Write a program to convert a given string Into Lowercase. */

int convertIntoLowercase(char *p){
    if(!p) return 0;

    while(*p){
        if(*p >= 'A' && *p <= 'Z')
            *p += 'a' - 'A';
        p++;
    }
    return 1;
}
