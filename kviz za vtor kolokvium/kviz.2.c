/*Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што
означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со
најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int najznacajna(int n){
while (n>=10){
    n/=10;
}
return n;
}
int main()
{
    wtf();

    int n, x, max=0, maxbroj=0;
    FILE *f=fopen("broevi.txt","r");
    while (!feof(f)){
        fscanf(f,"%d",&n);
        if (n==0) break;
        max=0, maxbroj=0;
    for (int i=0; i<n; i++){
        fscanf(f,"%d",&x);
        if (najznacajna(x)>max){
            max=najznacajna(x);
            maxbroj=x;
        }
    }
    printf("%d\n",maxbroj);
    }
    fclose(f);
    return 0;
}
