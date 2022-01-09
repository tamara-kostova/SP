/*Да се напише програма која што од дадена влезна датотека "text.txt" ќе испечати колку зборови има во секој ред, како и ќе
испечати просечен број на зборови во редовите во датотеката. Во рамките на секој ред, кои било два збора се разделени точно со
едно празно место.Дополнително да се испечати редот со најголем број на зборови во него, на начин што секоја мала буква ќе биде
голема, а секоја голема ќе биде мала..*/
#include <stdio.h>

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

    FILE *f=fopen("text.txt","r");
    int r=0, z=0, max=0, red=0, vkupno=0;;
    while (!feof(f)){
        char c=fgetc(f);
        if (c==' '||c=='\t'||c=='\n'||c=='\0') z++;
        if (c=='\n'||c=='\0') {
                r++;
                printf("%d\n", z);
                if (z>max) {max=z; red=r;}
                vkupno+=z;
                z=0;}
    }
    printf("%.2f\n", vkupno/(float)r);
    fclose (f);
    r=1;
    FILE *p = fopen("text.txt", "r");
    while(!feof(p))
    {
        char c = fgetc(p);
        if(c == '\n' || c == '\0' || c == '\t') r++;
        if(r==red){
            if(isalpha(c)){
                    if(!(isupper(c))) c = toupper(c);
                    else c = tolower(c);
            }
            if(c != '\n') printf("%c", c); }
    }

    fclose(p);
}
