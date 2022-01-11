#include <stdio.h>
#include <ctype.h>

int main() {
    int m, n;
    scanf("%d %d",&m, &n);
    int a[m][n], b[m][n];
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            b[i][j]=0;}
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++){
            if (i>0&&a[i-1][j]>0) b[i][j]+=a[i-1][j];
            if (i<m-1&&a[i+1][j]>0) b[i][j]+=a[i+1][j];
            if (j>0&&a[i][j-1]>0) b[i][j]+=a[i][j-1];
            if (i<n-1&&a[i][j+1]>0) b[i][j]+=a[i][j+1];
        }
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++)
            printf("%d ",b[i][j]);
        printf("\n");}
    return 0;
}
