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

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *f=fopen("input.txt", "r");
    int n=fgetc(f)-'0', a[n][n], s=0;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++){
            fscanf(f, "%d", &a[i][j]);
            if (i==j) s+=a[i][j];}
    fclose(f);
    FILE *w=fopen("output.txt", "w");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i>j) fprintf(w,"%03d ",s);
            else fprintf (w, "    ");}
        fprintf(w,"\n");}
    fclose(w);
    printFile();
    return 0;
}
