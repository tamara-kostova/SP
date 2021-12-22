/*Да се напише рекурзивна функција за наоѓање на НЗД на два броја а и b, каде a > b. Потсетник: За наоѓање на НЗД може да се
користи Евклидовиот алгоритам.*/
#include <stdio.h>
int NZD(int a, int b){
if (!b) return a;
else NZD(b, a%b);
}
int main(){
int a, b;
scanf("%d %d", &a, &b);
printf("%d",NZD(a,b));
return 0;
}
