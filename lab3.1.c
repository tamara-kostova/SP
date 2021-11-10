#include <stdio.h>
int main(){
int n, x, i=0, s=0, p=1;
scanf("%d", &n);
x=n;
while (x>0){
    x/=10;
    i++;
}
if (i==7){
        int a[7]={};
    for (int i=6; i>=0; i--){
        a[i]=n%10;
        s+=a[i];
        p*=a[i];
        n/=10;}
    for (int i=0; i<7; i++) printf("%d\n", a[i]);
printf("%d\n", s);
printf("%d", p);
}
else
printf("Vneseniot broj ne e 7 cifren!");
return 0;
}
