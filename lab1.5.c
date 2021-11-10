/*Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез, ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.*/
#include <stdio.h>
int main(){
    int broj, s, h=0, m=0;
    scanf("%d", &s);
    broj=s;
        if (s/3600>0){
            h+=s/3600;
            s-=3600*(s/3600);
            }
        if (s/60>0){
            m+=s/60;
            s-=60*(s/60);
            }
printf("%d sekundi se %d casovi, %d minuti i %d sekundi", broj, h, m, s);
return 0;
    }
