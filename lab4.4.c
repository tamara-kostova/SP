/*Да се напише програма во која во даден опсег на природни броеви [a,b],
ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2,но НЕ се деливи со 3,
е поголем од 0 и е делив со 7. На крај да се отпечати и бројот на вакви броеви.*/
#include <stdio.h>
int sumascifri (int n){
int c=0;
while (n>0){
    if ((n%10)%2==0&&((n%10)%3)!=0)
    c+=n%10;
    n/=10;
}
return c;
}
int main(){
int a, b, br=0;
scanf("%d %d", &a, &b);
for (int i=a; i<=b; i++){
    if (sumascifri(i)>0&&sumascifri(i)%7==0){
        printf("%d\n", i);
        br++;}
}
printf("Vkupno: %d",br);
}
