#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<1) printf("Nevaliden vlez");
    else{
    for(int i=1; i<=n; i++)
    {
        for (int j=0;j<i;j++)
            printf("*");
    printf("\n");
    }
    }
}
