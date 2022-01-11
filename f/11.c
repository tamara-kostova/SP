#include <stdio.h>
#include <ctype.h>

int f(int n){
if (n<10) return 1;
if (n%10>=n/10%10) return 0;
f(n/10);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (int i=0; i<n; i++)
        printf("%d\n", f(a[i]));
    return 0;
}
