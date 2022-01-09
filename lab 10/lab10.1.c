/*Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

релативната фреквенција на сите мали букви
релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со
вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main (){
    writeToFile();
    int vkupno=0, golemi=0, mali=0;

    FILE *f=fopen ("text.txt", "r");
    while (curr=fgetc(f)!='#'){
        if (isalpha(curr)){
                vkupno++;#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    int vkupno=0, golemi=0, mali=0;
    char curr;
    FILE *f=fopen ("text.txt", "r");
    while (!feof(f)){
        curr=fgetc(f);
        if (isalpha(curr)){
                vkupno++;
                if (isupper(curr)) golemi++;
                else mali++;
        }
    }
    printf("%.4f\n%.4f", (float) golemi/vkupno,(float)mali/vkupno);
    return 0;
}
