/*За даден број, проверете дали е 7-цифрен и ако е, испечате ги во посебен ред секој од неговите цифри почнувајќи од првата,
а потоа повторно во посебен ред нивната сума и производ.
Ако бројот не е 7 цифрен само испечатете "Vneseniot broj ne e 7 cifren!".*/
#include <stdio.h>
#include <math.h>
int main(){
int n, s=0, p=1, j;
scanf("%d", &n);
if (n/1000000>0&&n/1000000<10){
        for (int i=6; i>=0; i--){
            j=n/pow(10,i);
            printf("%d\n", j%10);
            s+=j%10;
            p*=j%10;}
printf("%d\n", s);
printf("%d", p);
}
else
printf("Vneseniot broj ne e 7 cifren!");
return 0;
}
