/* 7. Write a program in C to count the total number of alphabets, digits, and special characters in a string. (GCC Version not acceptable in standard c) */

#include <stdio.h>

int countDifferentCharacters(char *p){
    if(!p) return 0;

    int alphabets = 0, digits = 0, specialCharacters = 0;

    while(*p){
        switch(*p){
            case 'a' ... 'z':
            case 'A' ... 'Z':
                alphabets++;
                break;
            case '0' ... '9':
                digits++;
                break;
            default:
                specialCharacters++;
        }
        p++;
    }

    printf("There are total %d alphabets.\n", alphabets);
    printf("There are total %d digits.\n", digits);
    printf("There are total %d special characters.\n", specialCharacters);

    return 1;
}
