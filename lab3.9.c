#include <stdio.h>
int main(){
float kwh, smetka, ddv;
scanf("%f", &kwh);
if (kwh<500) smetka=5*kwh;
else{
smetka=5*500;
kwh-=500;
    if (kwh-150<=0) smetka+=kwh*7.5;
    else{
        smetka+=150*7.5;
        kwh-=150;
            if (kwh-200<=0) smetka+=kwh*11;
                else{
                    smetka+=200*11;
                    kwh-=200;
                        if (kwh>0) smetka+=kwh*13.5;
                }
    }
}
if (smetka<=7000) ddv=0.1*smetka;
else ddv=0.18*smetka;
printf("%.2f", smetka+ddv);
return 0;
}
