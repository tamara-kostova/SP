#include <stdio.h>
int main(){
    int sostojba, trosoci[4];
    scanf("%d", &sostojba);
    for (int i=0; i<5; i++) {
        scanf("%d", &trosoci[i]);
        sostojba+=trosoci[i];}
    if (sostojba>0) printf("1");
    else printf("0");
return 0;
    }
