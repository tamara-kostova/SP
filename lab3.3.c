#include <stdio.h>
int main(){
int n, a[4], b[4], br=0;
scanf("%d", &n);
float x=n;
for (int i=3; i>=0; i--){
    a[i]=n%10;
    if (a[i]==5) {
            b[i]=6;
            br++;}
    else b[i]=a[i];
    n/=10;
}
if (br<2) printf("Error");
else {
    int kolega=1000*b[0]+100*b[1]+10*b[2]+b[3];
    printf("%.4f%%", ((kolega-x)*100.0)/x);
}
return 0;
}
