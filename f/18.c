#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
    FILE *f=fopen("text.txt", "r");
    char c;
    int r=0, vkupno=0, indeks=1, maxindeks=0, max=0;
    while (!feof(f)){
        c=fgetc(f);
        if (isupper(c))
            r++;
        if (c=='\n'){
            printf("%d\n", r);
            if (r>max){
                max=r;
                maxindeks=indeks;
            }
            indeks++;
            vkupno+=r;
            r=0;
        }
    }
    printf("%.2f\n", (float)vkupno/indeks);
    fclose(f);
    FILE *readagain=fopen("text.txt", "r");
    indeks=1;
    while (!feof(f)){
        c=fgetc(readagain);
        if (c=='\n') indeks++;
        if (indeks==maxindeks)
            if (!isupper(c)) printf("%c", c);
            //if (c=='\n') break;}
    }
    return 0;
}
