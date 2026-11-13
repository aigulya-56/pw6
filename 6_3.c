#include <stdio.h> //18
int main(void){
    int number;
    int temp; //копия
    int digit;
    int sum_digits;

    int count1 = 0;
    int count2=0;

    int sum1 =0;
    int sum2 =0;
    printf("введите числа (0 - конец):\n");
    while(1){

    scanf("%d", &number);
    if(number ==0){
        break;
    }
    temp = number;
    if(temp<0){
        temp = -temp;
    }
    sum_digits = 0;
    while (temp >0){
        digit = temp %10;
        sum_digits = sum_digits + digit;
        temp = temp /10;
    }
    if (number % sum_digits == 0){
        count1++;
        sum1 +=number;
    }
    else{
        count2++;
        sum2 +=number;
    }
}
printf("кратные сумме цифр: %d\n", count1);
printf("среднее арифметическое: ");

if(count1 > 0)
{
    printf("%.2f\n",(double)sum1/count1);
}
else{
    printf("нет чисел\n");
}
printf("Остальные числа: %d\n",count2);
printf("среднее арифметическое: ");
if(count2 > 0){
    printf("%.2f\n",(double)sum2/count2);
}
else
{
    printf("нет чисел\n");
}
return 0;
}