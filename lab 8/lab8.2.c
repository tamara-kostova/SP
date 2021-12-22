/*Од стандарден влез се чита цел број К, по што се читаат N цели броеви. Да се напише програма која за секој прочитан број на
стандарден излез ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени. Печатењето на
цифрите поголеми од K да се реализира со посебна рекурзивна функција.*/
#include <stdio.h>
int cifri(int a, int k, int suma)
{
    if (!a) return suma;
    int temp=a, koef=1;
    while(temp>10){
            koef*=10;
            temp/=10; }
    if((a/koef)%10>k) {
            printf("%d", a/koef%10);
            suma+=(a/koef)%10;}
    return cifri(a-(a/koef)*koef, k, suma);
}

int main(){
int n, k, a;
scanf("%d", &k);
scanf("%d", &n);
for (int i=0; i<n; i++){
    scanf("%d", &a);
    int suma = cifri (a, k, 0);
    printf(" : %d\n", suma); }
return 0;
}
