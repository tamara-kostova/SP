#include <stdio.h>
int main(){
    float m, v, vm;
    scanf ("%f %f", &m, &v);
    vm=v/100;
    printf ("%.2f", m/(vm*vm));
return 0;
    }
