#include <stdio.h>
#include <ctype.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i=0;i<n;i++)
        if (a[i]<k) printf("%d ",a[i]);
    for (int i=0;i<n;i++)
        if (a[i]>=k) printf("%d ",a[i]);
    return 0;
}
