#include <stdio.h>
int slika(int n){
int sl=0;
while (n>0){
    sl=(sl*10)+n%10;
    n/=10;
}
return sl;
}
int main(){
int a, b, br=0;
scanf("%d %d", &a, &b);
for (int i=a; i<=b; i++){
    if (i+slika(i)<=2*i){
        printf("%d\n", i);
        br++;}
}
printf("Vkupno: %d", br);
return 0;
}
