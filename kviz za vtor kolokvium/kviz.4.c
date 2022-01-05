/*Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата
припаѓа во четвртиот квадрант. Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два
броеви кои претставуваат индекси на еден елемент од матрицата. Да се најдат сумите на секој од квадрантите и да се испечатат на
стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. Доколку не може
да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.*/
#include <stdio.h>

int main () {
    int m, n, prv, vtor, tret, cetvrt, red, kol;
    scanf("%d %d", &n, &m);
    int a[n][m];
    prv=vtor=tret=cetvrt=0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &red, &kol);
    for (int i=0; i<red; i++)
        for (int j=kol; j<m; j++)
            prv+=a[i][j];
    for (int i=0; i<red; i++)
        for (int j=0; j<kol; j++)
            vtor+=a[i][j];
    for (int i=red; i<n; i++)
        for (int j=0; j<kol; j++)
            tret+=a[i][j];
    for (int i=red; i<n; i++)
        for (int j=kol; j<m; j++)
            cetvrt+=a[i][j];
    printf("%d %d %d %d", prv, vtor, tret, cetvrt);
    return 0;
}
