#include <stdio.h>
#include <ctype.h>

int allOddNumbers (int *a, int n){
for (int i=0; i<n; i++)
    if (!(a[i]%2)) return 0;
return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    printf("%d ",allOddNumbers(a,n));
    return 0;
}
