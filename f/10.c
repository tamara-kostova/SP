#include <stdio.h>
#include <ctype.h>

int countofEvenDigits (int n){
if (!n) return 0;
if ((n%10)%2==0) return 1+countofEvenDigits(n/10);
return countofEvenDigits(n/10);
}

void readNumbers(int n){
int a;
for (int i=0; i<n; i++){
    scanf("%d", &a);
    printf("%d\n", countofEvenDigits(a));
}
}

int main() {
    int n;
    scanf("%d", &n);
    readNumbers(n);
    return 0;
}
