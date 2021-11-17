/*Да се напише програма во која во даден опсег на природни броеви [a,b],
ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2 е поголем од 0 и е делив со 4.
На крај да се отпечати и бројот на вакви броеви.#include <stdio.h>*/
int sumaparnicifri (int n){
int c=0;
while (n>0){
    if (n%2==0)
    c+=n%10;
    n/=10;
}
return c;
}
int main(){
int a, b, br=0;
scanf("%d %d", &a, &b);
for (int i=a; i<=b; i++){
    if (sumaparnicifri(i)>0&&sumaparnicifri(i)%4==0){
        printf("%d\n", i);
        br++;}
}
printf("Vkupno: %d",br);
}
