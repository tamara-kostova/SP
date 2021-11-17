/*Продолжение на претходната задача:
Од стандарден влез најпрво се читаат информации за бројот на фискални сметки коишто ќе бидат скенирани М, а потоа се вчитуваат податоци за M фискални сметки, како во претходната задача.
На стандарден излез да се испечати повратокот на ДДВ за секоја од скенираните фискални сметки. На крајот да се испечати сумата на купените артикли на фискалната сметка со најголем повраток на ДДВ, како и повратокот на ДДВ за таа сметка.
Да се игнорираат фискалните сметки, коишто имаат сума на артиклите поголема од 30.000 денари и за истите да се испечати соодветна порака, како во тест примерите.*/
#include <stdio.h>
int main(){
int m, n, maxrec=0;
float maxtax=0;
scanf("%d", &m);
int suma[m];
float ddv[m];
for (int j=0; j<m; j++){
suma[j]=0;
ddv[j]=0;
scanf("%d", &n);
int a[n];
char c[n];
for (int i=0; i<n; i++){
    scanf("%d %c",&a[i], &c[i]);
    suma[j]+=a[i];
    if (c[i]=='A')
            ddv[j]+=a[i]*0.18;
    if (c[i]=='B')
            ddv[j]+=a[i]*0.05;
}
}
for (int j=0; j<m; j++){
if (suma[j]<30000) {
    printf("Total tax return is: %.2f\n", 0.15*ddv[j]);
        if (suma[j]>maxrec)
            maxrec=suma[j];
        if (ddv[j]*0.15>maxtax){
                maxtax=0.15*ddv[j];
                maxrec=suma[j];}
}
else
        printf("Sum %d is bigger than 30000\n", suma[j]);
}
printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f", maxrec, maxtax);
return 0;
}
