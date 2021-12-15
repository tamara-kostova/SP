/*Да се напише програма во која од тастатура се читаат број на редици и колони (не поголеми од 100) и елементи на матрица
(цели броеви). Да се испечати редниот број на колоната (индексот) којашто има најмала сума на елементите. Ако има повеќе колони
со иста најмала сума, да се испечати индексот на првата таква колона. Читањето на елементи во матрицата да се направи преку
функција void readMatrix(int a[100][100], int n, int m)*/
#include <stdio.h>
void readMatrix(int a[100][100], int n, int m)
{
    for(int i=0; i<n;i++) {
        for(int j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    }
}
void findMin (int a[100][100], int n, int m, int sum[100]){
int min, indeks=0;
for (int j=0; j<m; j++){
    for (int i=0; i<n; i++)
        sum[j]+=a[i][j];
if (j==0) min=sum[j];
else if (min>sum[j]) {min=sum[j], indeks=j;}
}
printf("%d",indeks);
}
int main(){
int n, m;
scanf("%d %d", &n, &m);
int a[n][m], sum[m];
for (int i=0; i<m; i++) sum[i]=0;
readMatrix(a, n, m);
findMin (a, n, m, sum);
return 0;
}
