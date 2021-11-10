#include <stdio.h>
int main(){
int den, mesec, godina, t;
scanf("%d %d %d", &den, &mesec, &godina);
if (mesec<1||mesec>12) t=0;
else{
    if (mesec==1||mesec==3||mesec==5||mesec==7||mesec==8||mesec==10||mesec==12){
        if (den>31) t=0;
        else t=1;
        }
    if (mesec==4||mesec==6||mesec==9||mesec==11){
        if (den>30) t=0;
        else t=1;}
    if (mesec==2&&den>29) t=0;
    if (mesec==2&&den==29){
        if (godina%400==0||(godina%4==0&&godina%100!=0)) t=1;
        else t=0;
    }
}
if (t==0) printf("NE");
else printf("DA");
return 0;
}
