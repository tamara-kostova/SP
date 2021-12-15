/*За дадена низа со големина N, прочитајте ги сите елементи од дадениот влез, а потоа сортирајте ја низата.
Испечатете ја во растечки редослед.*/
#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int a[n];
for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
for (int i=0; i<n; i++)
    for (int j=i; j<n; j++)
        if (a[i]>a[j]){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
for (int i=0; i<n; i++)
        printf("%d ", a[i]);
return 0;
}
