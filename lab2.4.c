#include <stdio.h>
int main(){
    int r, c, k, p, v, b, m, d, cena1=0, cena2=0;
    scanf("%d", &r);
    scanf("%d %d %d", &c, &k, &p);
    scanf("%d %d %d %d", &v, &b, &m, &d);
    cena1=c+(r-k)*p;
    cena2=b+(r/v)*m+r*d;
    printf("%d %d", cena1, cena2);
    if (cena1<=cena2) printf("\n1");
    else printf("\n0");
return 0;
    }
