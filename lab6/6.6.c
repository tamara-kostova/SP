#include <stdio.h>
int main(){
int n, max=1, d=1;
scanf("%d", &n);
int a[n][n];
for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        scanf("%d", &a[i][j]);
for (int i=0; i<n; i++){
    d=1;
for (int j=1; j<n; j++)
    {
        if (a[i][j]>a[i][j-1])
            d++;
        else
        {
            if (d>max)
                max=d;
           d=1;
        }
        if (d>max) max=d;
    }
}
printf("%d\n", max);
return 0;
}
