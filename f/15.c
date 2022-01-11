#include <stdio.h>
#include <ctype.h>

int f (int n){
if (n<10) return 1;
if (n%10<=n/10%10) return 0;
f(n/10);
}

int main() {
    int n, a;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d", &a);
        if (f(a)) printf("YES\n");
        else printf("NO");
    }
    return 0;
}
