#include <stdio.h>
#include <ctype.h>
#include <string.h>

double RelativeFrequency (char *fileName, char letter){
FILE *f=fopen("fileName.txt", "r");
int k=0, vkupno=0;
while (!feof(f)){
    char c=fgetc(f);
    if (isalpha(c)){
        vkupno++;
        if (tolower(letter)==c||toupper(letter)==c)
            k++;
    }
}
return (float) k/vkupno;
}

void printRelativeFrequencies(char *fileName) {

}

int main() {

    return 0;
}
