#include <stdio.h>
void printarray1(int a[], int n){
for (int i=0; i<n; i++)
    printf("%d ", a[i]);
printf("\n");}

void printarray2(int a[], int n){
for (int i=0; i<n; i++)
    if (!(i%2)) printf("%d ", a[i]);
    printf("\n");}

void printarray3(int a[], int n){
for (int i=n-1; i>=0; i--)
    if (!(i%2)) printf("%d ", a[i]);}

int main(){
int n;
scanf("%d", &n);
int a[n], b[n];
for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
printarray1(a, n);
for (int i=0; i<n; i++)
    b[i]=a[n-i-1];
printarray1(b, n);
printarray2(b, n);
printarray3(b, n);
return 0;
}
