/*Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number" ќе ја пресмета сумата на
сите негови цифри.
Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.*/
#include <stdio.h>
int sumOfDigits(int n){
int s=0;
if (!n) return 0;
else
    return n%10+sumOfDigits(n/10);
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for(i = 0; i < n; ++i){

        int current;
        scanf("%d", &current);
        sum += sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d", sum);
    return 0;
}
