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
