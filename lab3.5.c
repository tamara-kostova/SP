#include <stdio.h>
#include <math.h>
int main(){
float x1, x2, x3, y1, y2, y3;
scanf("%f %f", &x1, &y1);
scanf("%f %f", &x2, &y2);
scanf("%f %f", &x3, &y3);
float ab=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
float ac=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
float bc=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
if (ab>=bc&&ab>=ac) printf("AB");
else if (bc>=ab&&bc>=ac) printf("BC");
else printf("AC");
return 0;
}
