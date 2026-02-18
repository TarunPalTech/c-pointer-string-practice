/* 7. Write a function to find a word in a given string. */

int findWord(const char *str, const char *word){
    if(!str || !word) return -1;
    
    if(strlen(str) < strlen(word)) return -1;
    
    while(*str){
        while(*str==' ') str++;
        
        const char *w = word;
        const char *temp = str;
        
        while(*temp && *w && *temp==*w){
            temp++;
            w++;
        }
        if(!*w && (!*temp || *temp==' ' || ispunct(*temp))) return 1;
        
        while(*str && *str!=' ') str++;
    }
    
    return 0;
}