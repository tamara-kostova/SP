#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int a=n/1000000, b=(n/1000)%1000, c=n%1000;
printf("0%d/%03d-%03d ", a, b, c);
if (a<=72) printf("T-mobile");
else if (a<=78) printf("A1");
else printf("LycaMobile");
return 0;
}
