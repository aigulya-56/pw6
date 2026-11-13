#include <stdio.h> //12
#include <wchar.h>
#include <locale.h>
int main (void){
    wint_t ch;
    wint_t min;
    int first = 1;
    setlocale(LC_ALL, "");
    printf("введите символы (# - конец):\n");
    while ((ch = getwchar()) !=L'#' && ch !=WEOF){
        if(first == 1){
            min = ch;
            first =0; //ssh
        }
        else if(ch<min){
            min = ch;
        }
    }
    if (first == 0){
        printf("минимальный код: %u\n", (unsigned int)min);
        printf("символ: %lc\n", min);
    }
    else {
        printf("Символы не введены.\n");
    }
    return 0;
}