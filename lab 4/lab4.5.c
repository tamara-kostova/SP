#include <stdio.h>
int main(){
int n;
float ddv=0;
scanf("%d", &n);
int a[n];
char c[n];
for (int i=0; i<n; i++){
    scanf("%d %c",&a[i], &c[i]);
    if (c[i]=='A')
            ddv+=a[i]*0.18;
    if (c[i]=='B')
            ddv+=a[i]*0.05;
}
printf("Total tax return is: %.2f", 0.15*ddv);
}
