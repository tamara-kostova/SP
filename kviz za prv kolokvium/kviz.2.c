/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е
„интересен“.
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
*/
#include <stdio.h>
#include <math.h>
int brojnacifri (int n){
    int c=0;
    while (n>0){
        n/=10;
        c++;
    }
    return c;
}
int obratenbroj (int n, int c){
int a=0;
while (n>0){
        a+=(n%10)*pow(10,c-1);
        n/=10;
        c--;
    }
return a;
}
int main(){
int a=0, n, c;
scanf("%d",&n);
if (n<=9) printf("Brojot ne e validen");
else {
for (int i=n-1; i>0; i--){
    c=brojnacifri(i);
    a=obratenbroj(i, c);
    if (a%c==0){
        printf("%d", i);
        break;
    }
}
}
return 0;
}
