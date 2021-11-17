/*Да се напише програма која ќе прочита два природни броја.
Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број.
Ако овој услов е исполнет, програмата печати DA, во спротивно NE.*/
#include <stdio.h>
int main(){
int a, b;
scanf("%d %d", &a, &b);
while (a>0){
int tmp=b, br=0;
while (tmp>0){
    if (a%10==tmp%10) {
        br++;
        break;
    }
    else
        tmp/=10;
}
if (!br) {
    printf("NE");
    break;}
else
a/=10;
}
if (!a) printf("DA");
return 0;
}

