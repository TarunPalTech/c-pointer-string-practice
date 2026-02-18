/* 2. Write a function to find the number of vowels in each of the n strings stored in a two dimension arrays, taken from user. */

int countVowels(int size, char (*str)[size], int n){
    if(!str) return -1;
    
    int count = 0;
    
    while(n--){
        char *p = *str;
        while(*p){
            char temp = tolower((unsigned char)*p);

            if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u') count++;
            p++;
        }
        str++;
    }
    return count;
}