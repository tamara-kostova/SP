/*Од стандарден влез се внесуваат два цели броеви A и P.

Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A] за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.

Ако нема такви броеви во интервалот, да се испечати порака NEMA.*/
#include <stdio.h>
int sumacifri (int n){
int c=0;
while (n>0){
    c+=n%10;
    n/=10;
}
return c;
}
int main(){
float a, p;
int br=0;
scanf("%f %f", &a, &p);
for (int i=a; i>0; i--){
    if ((sumacifri(i)/(float)i)*100==p){
        printf("%d\n", i);
        br++;
        }
    if (br==5) break;
}
if (br==0) printf("NEMA");
}
