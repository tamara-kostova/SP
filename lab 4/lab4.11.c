/*Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта празен правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

*
**
* *
*  *
******/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<2) printf("Nevaliden vlez");
    else{
    for(int i=0; i<n; i++)
    {
        for (int j=0;j<n;j++){
            if (i==j||i==n-1||j==0)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
    }
    }
}
