/*Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели
броеви:
N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се
заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се
продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void pomestuvanje(char *string, int x){
if (!*string) return ;
if (isalpha(*string)) {
    char a='a';
    if (isupper(*string))
        a='A';
    *string=a+(*string+x-a)%26;
}
pomestuvanje(string+1,x);
}
int main() {
    int n, x;
    scanf("%d %d\n", &n, &x);
    for (int i=0; i<n; ++i){
        char string[80];
        fgets(string,sizeof(string),stdin);
        pomestuvanje(string,x);
        printf("%s",string);
    }
	return 0;
}




