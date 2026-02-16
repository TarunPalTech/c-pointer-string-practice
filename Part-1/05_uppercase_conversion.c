/* 5. Write a program to convert a given string Into Uppercase. */

int convertIntoUppercase(char *p){
    if(!p) return 0;

    while(*p){
        if(*p >= 'a' && *p <= 'z')
            *p -= 'a' - 'A';
        p++;
    }
    return 1;
}
