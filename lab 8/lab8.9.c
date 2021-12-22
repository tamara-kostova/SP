/*Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран триаголник од броевите од
1 до n. Дополнителни функции се дозволени, но истите мора да се исто така рекурзивни. Не е дозволено користење на циклуси!*/
#include <stdio.h>
void pecati (int n, int i)
{
    if(i>n) return 0;
    printf("%d", i);
    pecati(n, i+1);
}
void triagolnik(int n)
{
    if (!n) return 0;
    triagolnik(n-1);
    pecati(n, 1);
    printf("\n");
}
int main(){
int n;
scanf("%d", &n);
triagolnik(n);
return 0;
}
