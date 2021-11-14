/*Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир
на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.*/
#include <stdio.h>
int zbirnadeliteli (int n){
int s=0;
for (int i=n-1; i>0; i--)
    if (n%i==0) s+=i;
return s;
}

int main(){
int n, max, broj;
scanf("%d", &n);
max=zbirnadeliteli(1);
for (int i=1; i<n; i++){
    if (zbirnadeliteli(i)>max){
        max=zbirnadeliteli(i);
        broj=i;}
}
printf("%d", broj);
return 0;
}
