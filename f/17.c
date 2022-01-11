#include <stdio.h>
#include <ctype.h>
#include <string.h>

void LetterFrequency (char *text, char letter){
int l=strlen(text), j1=0, j2=0;
for (int i=0; i<l; i++){
    if (tolower(letter)==text[i]) j1++;
    if (toupper(letter)==text[i]) j2++;}
    printf("%c -> %.3f%%\n", tolower(letter), (j1/(float)l)*100);
    printf("%c -> %.3f%%\n", toupper(letter), (j2/(float)l)*100);
}

int main() {
    char text[100], letter, c=' ';
    int i=0;
    while (c!='\n'){
        scanf("%c", &c);
        text[i]=c;
        i++;
    }
    scanf("%c", &letter);
    LetterFrequency(text, letter);
    return 0;
}
