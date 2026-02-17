/* 6. Write a program to count frequecy of each character of the given string. */

int countFrequency(const char *p){
    if(!p) return 0;
    
    int frequency[256] = {0};
    
    while(*p){
        frequency[(unsigned char)*p]++;
        p++;
    }
    
    int *f = frequency;
    
    while(f < (frequency+256)){
        if(*f>0)
            printf("'%c' - %d\n",f-frequency,*f);
        f++;
    }
    
    return 1;
}

// if you want to count frequency of alphabets (case insensitive) only then:

int countFrequency(const char *p){
    if(!p) return 0;
    
    int frequency[26] = {0};
    
    while(*p){
        if(!isalpha((unsigned char)*p)){
            p++;
            continue;
        }
        frequency[tolower((unsigned char)*p)-'a']++;
        p++;
    }
    
    for(int index=0; index<26; index++){
        if(frequency[index]>0){
            printf("'%c' - %d\n",index+97,frequency[index]);
        }
    }
    return 1;
}