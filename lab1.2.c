#include <stdio.h>
int main(){
    int s, a[9]={0}, b[9]={5000, 1000, 500, 100 ,50, 10, 5, 2, 1}, i=0;
    scanf ("%d", &s);
    for (int i=0; i<9; i++){
        while (s>=b[i]) {
                s-=b[i];
                a[i]++;}
        }
    for (int i=0; i<9; i++)
        printf("%d*%d\n", a[i], b[i]);
return 0;
    }
