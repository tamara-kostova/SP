/*Продолжение на претходната задача:
Од стандарден влез најпрво се читаат информации за бројот на фискални сметки коишто ќе бидат скенирани М, а потоа се вчитуваат податоци за M фискални сметки, како во претходната задача.
На стандарден излез да се испечати повратокот на ДДВ за секоја од скенираните фискални сметки. На крајот да се испечати сумата на купените артикли на фискалната сметка со најголем повраток на ДДВ, како и повратокот на ДДВ за таа сметка.
Да се игнорираат фискалните сметки, коишто имаат сума на артиклите поголема од 30.000 денари и за истите да се испечати соодветна порака, како во тест примерите.*/
#include <stdio.h>
int main(){
int a, c, m, n, maxrec=0, suma;
float maxtax=0, ddv;
scanf("%d", &m);
for (int i=0; i<m;i++){
suma=0, ddv=0;
scanf("%d", &n);
for (int i=0; i<n; i++){
    scanf("%d %c",&a, &c);
    suma+=a;
    if (c=='A') ddv+=a*0.18;
    if (c=='B') ddv+=a*0.05;
    printf("suma:%d\nddv:%f",suma, ddv);
}
if (suma<=30000) {
    printf("Total tax return is: %.2f\n", 0.15*ddv);
        if (suma>maxrec) maxrec=suma;
        if (ddv*0.15>maxtax){
                maxtax=0.15*ddv;
                maxrec=suma;}
}
else
        printf("Sum %d is bigger than 30000\n", suma);
}
printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f", maxrec, maxtax);
return 0;
}
