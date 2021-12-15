/*Да се имплементира функција elka(int n) што на стандарден излез ќе печати новогодишна елка од ѕвезди. n означува колку ѕведички има основата на елката 
и во сите тест примери n е непарен број.*/
#include <stdio.h>
void elka (int n){
int space=n/2, stars=1;
    for(int p=n/2, d=1, i=0; i<=n/2; p--, i++, d+=2)
    {
        int tp=p, td=d;
            while(tp){
                    printf(" ");
                    tp--;}
            while(td){
                    printf("*");
                    td--;}
        printf("\n");
    }
}

int main(){
int n;
scanf("%d", &n);
elka (n);
return 0;
}
