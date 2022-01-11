#include <stdio.h>
#include <ctype.h>

int digitsCount (int n){
int c=0;
while (n>0){
    n/=10;
    c++;
}
return c;
}
int getHalfOf (int number, char part){
    if (part=='L')
        return number/(int)pow(10,digitsCount(number)/2);
    else
        return number%(int)pow(10,digitsCount(number)/2);
}
void PrintInRange (int a, int b, char part){
for (int i=a; i<=b; i++){
    if (!(getHalfOf(i, part)%digitsCount(i)))
        printf("%d\n",i);
}
}

int main() {
    int a, b;
    char part;
    scanf("%d %d %c", &a, &b, &part);
    PrintInRange(a,b,part);
    return 0;
}
