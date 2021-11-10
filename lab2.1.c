#include <stdio.h>
int main(){
    int sostojba, cena;
    scanf("%d", &sostojba);
    scanf("%d", &cena);
    cena+=0.18*cena;
    if (sostojba-cena>=1)
        printf("1");
    else printf("0");
return 0;
    }
