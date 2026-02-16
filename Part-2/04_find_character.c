/* 4. Write a function to swap two characters of a given string with specified indices. */

int swapCharacterBetweenSpecifiedIndices(char *p, int i1, int i2){
    if(!p) return -1;
    
    int len = strlen(p);
    
    if(i1<0 || i2<0 || i1>=len || i2>=len) return -1;
    
    if(i1==i2) return 1;
    
    char temp = *(p+i1);
    *(p+i1) = *(p+i2);
    *(p+i2) = temp;
    
    return 1;
}