/*Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %) врз два броја кои се читаат од стандарден влез.*/
#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d + %d = %d\n", a, b, a+b);
    printf ("%d - %d = %d\n", a, b, a-b);
    printf ("%d * %d = %d\n", a, b, a*b);
    printf ("%d / %d = %d\n", a, b, a/b);
    printf ("%d % %d = %d\n", a, b, a%b);
    return 0;
}
