/*За дадена низа од N големина, исчитајте ја истата и потоа: Испечатете ја во нејзината оригинална форма; Сменете го распоредот
на низата во обратна насока; Отстранете го секој втор член; Повторно сменете го распоредот на низата во обратна насока*/
#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int a[n], b[n];
for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
for (int i=0; i<n; i++)
    printf("%d ", a[i]);
printf("\n");
for (int i=0; i<n; i++){
    b[i]=a[n-i-1];
    printf("%d ", b[i]);
}
printf("\n");
for (int i=0; i<n; i++)
    if (!(i%2)) printf("%d ", b[i]);
printf("\n");
for (int i=n-1; i>=0; i--)
    if (!(i%2)) printf("%d ", b[i]);
return 0;
}

