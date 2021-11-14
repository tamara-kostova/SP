/*Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број.
За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број
и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри).
За секој внесен број резултатот треба да се испечати во следниот формат:
[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]*/
#include <stdio.h>
int sumacifri(int n){
    int suma=0;
    while (n>0){suma+=n%10; n/=10;}
    return suma;
}
int maxcifra(int n){
int max=0;
while (n>0){if (n%10>max) max=n%10; n/=10;}
return max;
}
int main(){
    int n, prethoden, segasen;
    if (scanf("%d", &prethoden))
        printf("%d: %d\n", prethoden, sumacifri(prethoden));
    while (scanf("%d", &segasen)){
        printf("%d: %d\n", segasen, maxcifra(prethoden)+sumacifri(segasen));
        prethoden=segasen;}
    return 0;
}
