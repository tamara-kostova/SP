/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е
„интересен“.
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
*/
#include <stdio.h>
int brcifri(int n){
int c=0;
    while (n>0){
        n/=10; c++;
    }
return c;
}
int obratenrboj(int n){
int b=0;
while (n>0){
    b=b*10+n%10; n/=10;}
return b;
}
int main()
{
    int n;
    scanf("%d",&n);
    if (n<9) printf("Brojot ne e validen");
    else for (int i=n-1; i>0; i--)
        if (!(obratenrboj(i)%brcifri(i))){
            printf("%d", i);
            return 0;
        }
    return 0;
}
