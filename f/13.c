#include <stdio.h>
#include <ctype.h>

int suma (int n){
if (!n) return 0;
return (n/10)%10+suma(n/100);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d", suma(n));
    return 0;
}
