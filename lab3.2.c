#include <stdio.h>
#include <math.h>
int main(){
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
float d=b*b-4.0*a*c;
if (d>0){
        float x1=(-b+sqrt(d))/(2.0*a);
        float x2=(-b-sqrt(d))/(2.0*a);
    printf("Reshenija na ravenkata se: %.2f i %.2f", x2, x1);
}
else if (d<0) printf("Ravenkata nema realni reshenija");
else
    printf("Dvojno reshenie na ravenkata e: %.2f", -b/(2.0*a));
return 0;
}
