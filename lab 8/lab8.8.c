/*Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран превртен триаголник од
броевите од 1 до n, како во примерот подолу. Дополнителни функции се дозволени, но истите мора да се рекурзивни. Не е дозволено
користење на циклуси!*/
#include <stdio.h>
void triagolink (int n, int i){
if (!n) return 0;
    if(i>n){
            printf("\n");
            n--;
            i=1;}
    if (n) printf("%d ", i);
    triagolink (n, i+1);
}
int main(){
int n;
scanf("%d", &n);
triagolink(n, 1);
return 0;
}
