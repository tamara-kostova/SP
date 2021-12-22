/*Од стандарден влез се чита цел број n. Потоа се вчитуваат n низи од цели броеви (со максимална должина од 100 елементи),
при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата, па на крај бројот k.Да се напише програма
која за секоја низа ќе ја трансформира истата, т.ш. за секој k-ти елемент ќе се направи замена на местата помеѓу него и неговиот
претходник. Се смета дека важи k е најмалку 2.*/
#include <stdio.h>
int main(){
int n, m;
scanf("%d", &n);
for (int i=0; i<n; i++){
    scanf("%d", &m);
    int a[m], k;
    for (int i=0; i<m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
for (int i=0; i<m; i++){
    if (!((i+2)%k)&&i!=m-1){
        //printf("%d %% %d==0, treba da gi smenime %d so %d\n", i, k, a[i], a[i+1]);
        int tmp=a[i];
        a[i]=a[i+1];
        a[i+1]=tmp;
        }
        printf("%d ", a[i]);
}
printf("\n");
}
return 0;
}