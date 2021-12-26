/*Да се напише функција letterFrequency (char * text, char letter) што за даден letter ќе испечати информации која е релативната
фреквенција на појавување на таа буква во текстуалната низа text (како мала и како голема буква). Текстот е ограничен на максимум
1000 карактери.Релативната фреквенција на буква се пресметува како количник од бројот на појавувања на таа буква и вкупниот број
на букви во текстот.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letterFrequency (char * text, char letter)
{
    int l=strlen(text), j1=0, j2=0;
    for(int i=0; i<l; i++){
        if (tolower(letter)==text[i])
            j1++;
        if (toupper(letter)==text[i])
            j2++;
    }
    printf("%c -> %.3f%%\n", tolower(letter), (j1/(float)l)*100);
    printf("%c -> %.3f%%\n", toupper(letter), (j2/(float)l)*100);
}

int main () {

    char text[1000], letter, c='a';
    int i=0;
    while(c != '\n'){
            scanf("%c", &c);
            text[i]= c;
            i++;}
    scanf("%c", &letter);
    letterFrequency(text, letter);
    return 0;

}
