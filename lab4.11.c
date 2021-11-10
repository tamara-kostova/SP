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
