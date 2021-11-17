/*За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.
0-50 = 5
51-60 = 6
61-70 = 7
71-80 = 8
81-90 = 9
91-100 = 10
Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:
1 - 3 = "-"
4 - 7 = " "
8-0 = "+"*/
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
