#include <stdio.h>
int main(){
    int a;
    char znak[3];
    scanf ("%c %c %c", &znak[0], &znak[1], &znak[2]);
    for (int i=0; i<3; i++) {
            a=(int)znak[i];
        if (!((a>=48&&a<=57)||(a>=65&&a<=90)||(a>=97&&a<=122)))
            printf("0");
        else printf("1");
    }
    printf("\n");
    for (int i=0; i<3; i++) {
            a=(int)znak[i];
        if ((a>=65&&a<=90)||(a>=97&&a<=122))
            printf("0");
        else printf("1");
    }
return 0;
    }
