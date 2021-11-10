#include <stdio.h>
int main(){
    int indeks, ocena[6], suma=0, nagraden;
    scanf ("%d", &indeks);
    for (int i=0; i<6; i++) {
            scanf("%d", &ocena[i]);
            suma+=ocena[i];}
    printf("Prosek: %.3f\n", suma/6.0);
    printf("Student: %d\n", indeks);
    int godina=indeks/10000;
    printf ("%d godina\n", 20-godina);
    if (suma/6.0>=9.5)
        nagraden=1;
    else nagraden=0;
    printf("Nagraden: %d", nagraden);
return 0;
    }
