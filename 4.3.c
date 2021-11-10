#include <stdio.h>
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
