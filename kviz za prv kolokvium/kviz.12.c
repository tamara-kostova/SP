/*Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од
број.За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на
бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на најдените цифри со
максимална вредност во следниот формат:
*/
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
