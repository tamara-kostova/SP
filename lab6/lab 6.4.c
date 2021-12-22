/*За дадена квадратна матрица со големина N, најдете ја разликата помеѓу главната и споредната дијагонала,
а потоа разликата помеѓу првата колона и последната колона на матрицата.*/
#include <stdio.h>
int main(){
int n, sg=0, ss=0, f=0, l=0;
scanf("%d", &n);
int a[n][n];
for (int i=0; i<n; i++)
    for (int j=0; j<n; j++){
        scanf("%d", &a[i][j]);
        if (i==j) sg+=a[i][j];
        if (i+j==n-1) ss+=a[i][j];
        if (j==0) f+=a[i][j];
        if (j==n-1) l+=a[i][j];
        }
printf("%d\n%d", sg-ss, f-l);
return 0;
}
