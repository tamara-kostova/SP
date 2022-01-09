/*Од датотека "input.txt" да се вчита квадратна матрица, така што прво ќе се прочита број n што означува колку редови и колони
има матрица, а потоа да се вчитаат сите n x n елементи од матрицата.
Во датотеката "output.txt" да се запише матрицата така што ќе се запишат само елементите над главната дијагонала, но ќе имаат
вредност колку сумата на елементите на главната дијагонала. Печатењето да се прави со три места за бројот за елементите над
главната дијагонала, а за останатите да се испечатат три празни места, со цел да се добие посакуваниот излез како во тест примерите.*/
#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
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

    FILE *f = fopen("input.txt", "r");
    int n=fgetc(f)-'0', a[n][n], s=0;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++){
            fscanf(f, "%d", &a[i][j]);
            if (i==j) s+=a[i][j];
        }
    FILE *w = fopen("output.txt", "w");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
        if (i<j) fprintf(w, "%03d ", s);
        else fprintf (w, "    ");
        }
    fprintf(w, "\n");
    }
    fclose(w);

    printFile();
    return 0;
}
