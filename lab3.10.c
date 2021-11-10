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
