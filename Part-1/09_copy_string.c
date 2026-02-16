/* 9. Write a program to copy one string to another char array. */

int copyString(char *p, char *q){
    if(!p || !q) return 0;

    while((*q++ = *p++));
    
    return 1;
}
