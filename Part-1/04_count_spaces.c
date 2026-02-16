/* 4. Write a program to count spaces in a given string. */

int countSpaces(const char *p){
    if(!p) return -1;

    int count = 0;

    while(*p){
        if(*p == ' ')
            count++;
        p++;
    }

    return count;
}
