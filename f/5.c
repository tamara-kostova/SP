#include <stdio.h>
#include <ctype.h>

int main() {
    int n, k=0;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            if (i==j&&a[i][j]) {
                a[i][j]=0;
                k++;
            }
        }

    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (a[i][j]!=a[j][i])
                k++;
    printf("%d",k);
    return 0;
}
