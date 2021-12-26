/*Да се напише функција revertString(char *a, char *b, char *comparator) која ќе ги преврти стринговите a и b и потоа ќе врати
еден од нив во зависност од стрингот comparator, кој доколку има вредност pogolem се враќа лексикографски поголемиот или доколку
има вредност pomal се враќа лексикографски помалиот. Доколку двата стрингови се еднакви, не е битно кој стринг ќе се врати.
Во главниот дел од програмата треба N пати да се прочитаат 3 стрингови и за нив да се испечати резулататот од revertString
функцијата. Забелешка: За стрингот comparator се смета дека не е case-sensitive. На пример за вредностите poGolEm и POGoleM
функцијата треба да врати ист резултат. Доколку пак comparator има непозната вредност да се врати стрингот "Invalid comparator".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void flipString(char *string)
{
    int l=strlen(string);
    char temp[l];
    for(int i=0; i<l; i++)
        temp[l-1-i] = *(string+i);
    for(int i=0; i<l; i++)
        *(string+i) = temp[i];
}

void revertString(char *str1, char *str2, char *comparator)
{
    for(int i=0; i<strlen(comparator); i++)
            *(comparator+i) = tolower(*(comparator+i));
        flipString(str1);
        flipString(str2);

    char pomal[100], pogolem[100];
    strcpy(pomal, str1);
    strcpy(pogolem, str2);
    if( tolower(*(str1)) > tolower(*(str2))){
            strcpy(pomal, str2);
            strcpy(pogolem, str1); }
    if( tolower(*(str1)) == tolower(*(str2)))
        if( tolower(*(str1+1)) > tolower(*(str2+1))){
            strcpy(pomal, str2);
            strcpy(pogolem, str1); }


    if(!strcmp(comparator, "pomal")){
            printf("%s\n", &pomal); }
    else if(!strcmp(comparator, "pogolem"))
        printf("%s\n", &pogolem);
    else
        printf("Invalid comparator\n");
}

int main () {

    int n;
    scanf("%d", &n);
    while(n){
        char str1[100], str2[100], comparator[100];
        scanf("%s %s %s", &str1, &str2, &comparator);
        revertString(str1, str2, comparator);
        n--; }


    return 0;

}
