#include <stdio.h>
int sumacifri (int n){
int c=0;
while (n>0){
    c+=n%10;
    n/=10;
}
return c;
}
int main(){
float a, p;
int br=0;
scanf("%f %f", &a, &p);
for (int i=a; i>0; i--){
    if ((sumacifri(i)/(float)i)*100==p){
        printf("%d\n", i);
        br++;
        }
    if (br==5) break;
}
if (br==0) printf("NEMA");
}
