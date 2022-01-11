#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    int min=a[1][0], max=a[0][1];
    for (int i=1; i<n; i++)
        for (int j=0; j<i; j++)
            if (a[i][j]<min)
                min=a[i][j];

    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (a[i][j]>max)
                max=a[i][j];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j) printf("%d ",a[i][j]);
            if (i<j) printf("%d ", max);
            else printf("%d ", min);}
            printf("\n");
    }
    return 0;
}
