/*Да се напише програма каде од тастатура се внесува еден седумцифрен број. Програмата печати DA доколку бројот е специјален,
а NE во спротивно. Еден број е специјален доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на
последните две или доколку не е делив со својата втора цифра и не е делив со збирот на последните две. Да се внимава на делење со 0,
 т.е. да се испечати порака Nevaliden broj во таков случај.*/
#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int prvacifra=n/1000000;
int vtoracifra=(n/100000)%10;
int zbirposledni2=n%10+(n%100)/10;
if (vtoracifra==0||zbirposledni2==0) printf("Nevaliden broj");
else
    if ((n%prvacifra==0&&n%zbirposledni2!=0)||(n%prvacifra!=0&&n%zbirposledni2!=0))
        printf("DA");
    else
        printf("NE");
return 0;
}
