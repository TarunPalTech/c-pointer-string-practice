/* 1. Write a function to store strings, taken from user, to the given 2d array. */

// Method - 1

int inputString(int size, char (*str)[size], int n){
    if(!str) return 0;
    
    for(int i=0; i<n; i++){
        printf("Enter string %d: ", i+1);
        if(fgets(str[i],size,stdin) != NULL){
            int len = strlen(str[i]);
            if(len>0 && str[i][len-1]=='\n'){
                str[i][len-1] = '\0';
            }
        }else{
            *p = '\0';
        }
    }
    return 1;
}

// Method - 2


int inputString(int size, char (*str)[size], int n){
    if(!str) return 0;
    
    int i=1;
    
    while(n--){
        printf("Enter string %d: ", i++);
        if(fgets(*str,size,stdin)){
            char *p = *str;
            
            while(*p && *p!='\n') p++;
            
            if(*p=='\n') *p = '\0';
        }else{
            *p = '\0';
        }
        str++;
    }
    return 1;
}
