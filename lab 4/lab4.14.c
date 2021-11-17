#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<2) printf("Nevaliden vlez");
    else{
    for(int i=1; i<=n; i++)
    {
        for (int j=1;j<=n;j++){
            if (i+j>n) printf("*");
            else printf(" ");
        }
    printf("\n");
    }
    }
}
