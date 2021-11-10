#include <stdio.h>
int main(){
    int n, cifri[4]={0};
    scanf("%d", &n);
    if (n==0)
        printf("0 0 0");
    else{
    for (int i=4; n>0; i--){
        cifri[i]=n%10;
        n/=10;
    }
    for (int i=0; i<2; i++)
    printf("%d ", cifri[i]+cifri[4-i]);
    printf("%d", cifri[2]);
    }
return 0;
    }
