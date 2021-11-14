/*Од тастатура се внесува колку студенти полагале колоквиум и потоа се внесуваат поените на сите кои полагале.
Програмата треба да отпечати средна вредност на поените на сите студенти кои имале помалку од 50 поени,
како и список на студентите со повеќе од 50 поени. Исто така програмата да отпечати средна вредност на поените на сите
кои положиле со најмалку 50 поени и нивните освоени поени (редоследот на печатење во двата случаеви треба да биде ист
како и редоследот на внесување). Максималниот број на студенти што може да се внесат е 1000.*/
#include <stdio.h>
int main(){
int n, padnati=0;
float prosekpadnati=0, prosekpolozeni=0;
scanf("%d",&n);
int a[n];
for (int i=0; i<n; i++){
    scanf("%d", &a[i]);
    if (a[i]<50) {prosekpadnati+=a[i];
    padnati++;}
    else prosekpolozeni+=a[i];
}
printf("Sredna vrednost na padnati %.2f\n",prosekpadnati/padnati);
for (int i=0; i<n; i++)
    if (a[i]<50) printf("%d ",a[i]);
printf("\nSredna vrednost na polozeni %.2f\n",prosekpolozeni/(n-padnati));
for (int i=0; i<n; i++)
    if (a[i]>=50) printf("%d ",a[i]);
return 0;
}
