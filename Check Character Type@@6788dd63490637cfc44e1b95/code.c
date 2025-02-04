#include <stdio.h>

int main() {

    char a;
    if(a>='0' && a<='9')
    printf("Digit");
    else if(a>='a' && a<='z'){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'O' || a == 'u')
        printf("Vowel");
        else
        printf("Consonant");
    }
    else
      printf("Special Character");
            return 0;
}