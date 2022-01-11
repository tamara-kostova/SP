#include <stdio.h>
#include <ctype.h>

int cifri (int a, int k, int suma){
if (!a) return suma;
int temp=a, koef=1;
    while(temp>10){
            koef*=10;
            temp/=10; }
    if((a/koef)%10>k) {
            printf("%d", a/koef%10);
            suma+=(a/koef)%10;}
    return cifri(a-(a/koef)*koef, k, suma);
}

int main() {
    int k, n, a;
    scanf("%d\n%d", &k, &n);
    for (int i=0; i<n; i++){
        scanf("%d", &a);
        printf(" : %d\n", cifri(a,k,0));
    }
    return 0;
}
