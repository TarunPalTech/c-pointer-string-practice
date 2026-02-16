/* 3. Write a function to swap two characters of a given string with specified indices. */

int findCharacterBetweenSpecifiedIndices(const char *p, int i1, int i2, char ch){
    if(!p) return -1;
    
    int len = strlen(p);
    
    if(i1<0 || i2<0 || i1>=len || i2>=len) return -1;
    
    char temp = tolower((unsigned char)ch);
    while(i1<=i2){
        if(tolower((unsigned char)p[i1])==temp) return 1;
        i1++;
    }
    
    return 0;
}