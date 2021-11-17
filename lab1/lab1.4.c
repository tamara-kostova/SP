#include <stdio.h>
int main(){
    int a[4];
    float prosek=0;
    for (int i=0; i<5; i++){
        scanf("%d", &a[i]);
        prosek+=a[i];
    }
    printf("%.2f", prosek/5);
return 0;
    }
