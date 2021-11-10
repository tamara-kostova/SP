#include <stdio.h>
int main(){
int embg, a[3];
scanf("%d", &embg);
int den=embg/100000, mesec=(embg/1000)%100;
for (int i=0; i<3; i++) {
        a[i]=embg%10;
        embg/=10;}
int godina=a[0]+a[1]*10+a[2]*100+1000;
int username=100*den+1000*mesec+godina;
if (username>=10000) printf("%d", username);
else{
if (godina<=1960) printf("%d", username+70000);
    else if (godina<=1980) printf("%d", username+80000);
        else printf("%d", username+90000);
return 0;
}}
