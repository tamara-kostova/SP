#include <stdio.h>
#include <ctype.h>

int main() {
    int n, m;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d", &m);
        int a[m], k=0;
        for (int i=0; i<m; i++)
            scanf("%d", &a[i]);
    for (int i=0; i<m/2; i++)
        if (a[i]==a[m-i-1]) k+=2;
    if (m%2) k++;
    printf("%.2f%%\n",100.0*k/m);
    }
    return 0;
}
