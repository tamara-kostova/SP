/*Од тастатура се внесува број на студенти кои ќе полагаат колоквиум, а потоа и индексите (цели броеви) на сите студенти кои
ќе полагаат колоквиум. Програмата треба да ги подели студентите во три групи: студенти со индекси кои завршуваат
на цифрата 0, 1 и 2, студенти со индекси кои завршуваат на цифрата 3, 4, 5 и студенти со индекси кои завршуваат
на цифрата 6, 7, 8, 9. Програмата треба да ги испечати индексите за секоја група, во истиот редослед како што биле внесени.
Максималниот број на студенти што може да се внесат е 1000.*/
#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int indeks[n], poslednacifra[n];
for (int i=0; i<n; i++) {
    scanf("%d", &indeks[i]);
    poslednacifra[i]=indeks[i]%10;
}
printf("Grupa 1\n");
for (int i=0; i<n; i++)
    if (poslednacifra[i]==0||poslednacifra[i]==1||poslednacifra[i]==2)
        printf("%d ", indeks[i]);
printf("\nGrupa 2\n");
for (int i=0; i<n; i++)
    if (poslednacifra[i]==3||poslednacifra[i]==4||poslednacifra[i]==5)
        printf("%d ", indeks[i]);
        printf("\nGrupa 3\n");
for (int i=0; i<n; i++)
    if (poslednacifra[i]==6||poslednacifra[i]==7||poslednacifra[i]==8||poslednacifra[i]==9)
        printf("%d ", indeks[i]);
}
