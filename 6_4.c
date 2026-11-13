#include <stdio.h> //24
int main(void){
    double water;
    double cost;
    printf("введите расход вводы в м3: ");
    scanf("%lf", &water);
    if (water<0){
        printf("ошибка: расход не может быть отрицательным\n");
    }
    else if(water<=10){
        cost = water *1;
    }
    else if(water<=30){
        cost = 10*1+(water-10)*2;
    }
    else {
        cost = 10*1+20*2+(water-30)*3;
    }
    if(water >=0){
        printf("\n расход воды: %.2f\n", water);
        printf("\n итоговая стоимость:%.2f\n",cost);
    }
    return 0;
}