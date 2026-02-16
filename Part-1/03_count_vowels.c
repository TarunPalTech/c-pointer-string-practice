/* 3. Write a program to count vowels in a given string. */

int countVowels(const char *p){
    if(!p) return -1;

    int count = 0;

    while(*p){
        char ch = *p;

        if(ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';   // convert to lowercase manually

        if(ch == 'a' || ch == 'e' || ch == 'i' || 
           ch == 'o' || ch == 'u')
            count++;

        p++;
    }

    return count;
}
