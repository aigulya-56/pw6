#include <stdio.h> //15
#include <ctype.h>
int main(void){
    int ch; 
    int count = 0; 
    printf("введите символы (# - завершение ввода):\n");
    while ((ch=getchar()) != '#' && ch !=EOF){
        if (iscntrl((unsigned char)ch)){
            count = count + 1; 
        }
   }

   printf("кол-во найденных управляющих символов: %d\n", count);
}