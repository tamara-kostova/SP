#include <stdio.h>
#include <ctype.h>

float max (float *array, int n){
float max=array[0];
for (int i=1; i<n; i++)
    if (array[i]>max)
        max=array[i];
return max;
}
float min (float *array, int n){
float min=array[0];
for (int i=1; i<n; i++)
    if (array[i]<min)
        min=array[i];
return min;
}
void normalize (float *array, int n){
float m=min(array,n), k=max(array,n);
for (int i=0; i<n; i++){
    float x=array[i];
    x=(x-m)/(k-m);
    array[i]=x;}
}
void sort (float *array, int n){
for (int i=0; i<n; i++)
    for (int j=i+1; j<n; j++)
        if (array[i]<array[j]){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;}
}

int main() {
    int n;
    scanf("%d",&n);
    float a[n];
    for (int i=0; i<n; i++)
        scanf("%f", &a[i]);
    printf("MAX -> %.3f\n", max(a,n));
    printf("MIN -> %.3f\n", min(a,n));
    normalize(a,n);
    sort(a,n);
     for (int i=0;i<n;i++) printf("%.3f ", a[i]);
    return 0;
}
