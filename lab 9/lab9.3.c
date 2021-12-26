/*Да се напишат следните функции за работа со низи од децимални броеви:
Функцијата double max (double * niza, int n), што како резултат ќе го врати максимумот во низата niza со n елементи.
Функцијата double min (double * niza, int n), што како резултат ќе го врати минимумот во низата niza со n елементи.
Функцијата void normalize (double * niza, int n), што ќе го нормализира секој елемент од низата по следната формула:
x = (x-min(niza)) / (max(niza) - min(niza))*/
#include<stdio.h>

float max (float * niza, int n){
float max=0;
for (int i=0; i<n; i++)
    if (niza[i]>max)
        max=niza[i];
return max;
}
float min (float * niza, int n){
float min=max(niza,n);
for (int i=0; i<n; i++)
    if (niza[i]<min)
        min=niza[i];
return min;
}
void normalize (float * niza, int n){
float m=min(niza,n), k=max(niza,n);
for (int i=0; i<n; i++){
    float x=niza[i];
    x=(x-m)/(k-m);
    niza[i]=x;}
}

int main () {

    float niza [200];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%f", &niza[i]);

    }

    printf("MAX -> %.3f\n", max(niza,n));
    printf("MIN -> %.3f\n", min(niza,n));

    normalize(niza,n);
    sort(niza,n);

     for (i=0;i<n;i++) {
        printf("%.3f ", niza[i]);

    }

    return 0;

}
