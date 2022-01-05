/*Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата,
а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците
и колоните има барем 3 последователни елементи со вредност 1.*/
#include <stdio.h>

int main () {
    int m, n, redici=0, koloni=0;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++){
        int niza=0;
        for (int j = 0; j < m; j++){
            niza++;
            if (!(a[i][j])) niza=0;
        if (niza==3) {redici++; break;}}
            }
    for (int j = 0; j < m; j++){
        int niza=0;
        for (int i = 0; i < n; i++){
            niza++;
            if (!(a[i][j])) niza=0;
        if (niza==3) {koloni++; break;}}
            }
    printf("%d", redici+koloni);
    return 0;
}
