/*Да се напише програма која за петцифрен број прочитан од стандарден влез ќе проверува дали е палиндром.
Ако бројот е палиндром, на екран треба да се испечати пораката "Palindrom", а во спротивно - "Ne e palindrom".
Доколку внесениот број не е петцифрен треба да се испечати пораката "Nevaliden vlez".*/
#include <stdio.h>
int main(){
int x, cifri=0;
scanf("%d", &x);
int n=x;
while (x>0){
    x/=10;
    cifri++;
}
if (cifri!=5) printf("Nevaliden vlez");
else{
    if (n%10==n/10000&&(n/10)%10==(n/1000)%10)
        printf("Palindrom");
    else printf("Ne e palindrom");
}
return 0;
}
