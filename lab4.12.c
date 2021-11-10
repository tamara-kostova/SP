#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<1) printf("Nevaliden vlez");
    else{
    for(int i=n; i>=1; i--)
    {
        for (int j=i;j>0;j--)
            printf("*");
    printf("\n");
    }
    }
}
