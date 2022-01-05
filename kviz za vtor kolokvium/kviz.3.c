/*Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи
во низата. Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата. Ако
индексот ind е поголем од N функцијата треба да врати 0.
НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sum_pos (int *a, int indeks, int n){
int suma=0;
if (indeks>n) return 0;
for (int i=indeks; i<n; i++)
    suma+=*(a+i);
return suma;
}

int main () {
    int n, indeks;
    scanf("%d", &n);
    int *a;
    for (int i = 0; i < n; i++)
        scanf("%d", (a+i));
    scanf("%d", &indeks);
    printf("%d", sum_pos(a,indeks,n));
    return 0;
}
