#include <stdio.h>
int main(){
int poeni, ocena;
scanf("%d", &poeni);
if (poeni>100||poeni<0) printf("Nevalidna vrednost za poeni!");
else {
    if (poeni>=91) ocena=10;
    else if (poeni>=81) ocena=9;
    else if (poeni>=71) ocena=8;
    else if (poeni>=61) ocena=7;
    else if (poeni>=51) ocena=6;
    else ocena=5;

int poslednacifra=poeni%10;
char znak;
if (poslednacifra<=3) znak='-';
else if (poslednacifra<=7) znak=' ';
else znak='+';
if (poeni==100) znak=' ';
if (ocena==5) znak=' ';
printf("Ocenka %d%c", ocena, znak);
}
return 0;
}
