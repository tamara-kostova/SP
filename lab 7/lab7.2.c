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
