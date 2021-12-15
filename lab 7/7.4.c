#include <stdio.h>
int obratenBroj (int broj){
int novbroj=0;
while (broj>0){
    novbroj=novbroj*10+broj%10;
    broj/=10;
}
return novbroj;
}
int sumaNaCifri (int broj){
int s=0;
while (broj>0){
    s+=broj%10;
    broj/=10;
}
return s;
}
void pecatiVoInterval (int a, int b){
for (int i=a; i<=b; i++)
    if ((i+obratenBroj(i))%sumaNaCifri(i+obratenBroj(i))==0)
        printf("%d\n",i);
}
int main(){
    int a, b;
scanf("%d %d", &a, &b);
pecatiVoInterval(a,b);
return 0;
}
