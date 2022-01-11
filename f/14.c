#include <stdio.h>
#include <ctype.h>

int proizvod (int n){
if (!n) return 1;
return (n/10)%10*proizvod(n/100);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d", proizvod(n));
    return 0;
}
