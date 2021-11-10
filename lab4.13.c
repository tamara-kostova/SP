#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<1) printf("Nevaliden vlez");
    else{
    for(int i=0; i<n; i++)
    {
        for (int j=0;j<n;j++){
            if (i==0||j==0||i==n-j-1) printf("*");
            else printf(" ");
        }
    printf("\n");
    }
    }
}
