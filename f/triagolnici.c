#include <stdio.h>
void triagolink (int n, int i){
if (!n) return 0;
    if(i>n){
            printf("\n");
            n--;
            i=1;}
    if (n) printf("%d ", i);
    triagolink (n, i+1);
}
int main(){
int n;
scanf("%d", &n);
triagolink(n, 1);
return 0;
}

#include <stdio.h>
void pecati (int n, int i)
{
    if(i>n) return 0;
    printf("%d", i);
    pecati(n, i+1);
}
void triagolnik(int n)
{
    if (!n) return 0;
    triagolnik(n-1);
    pecati(n, 1);
    printf("\n");
}
int main(){
int n;
scanf("%d", &n);
triagolnik(n);
return 0;
}
