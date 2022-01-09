/*Дадена е текстуална датотека text.txt.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви
да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се
печати бројот на појавувања на паровите самогласки.*/
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

  FILE *f = fopen ("text.txt", "r");
    char curr, prev=' ', samoglaski[5]={'a', 'e', 'i', 'o', 'u'};
    int vkupno=0;
    while (!feof(f)){
    curr=tolower(fgetc(f));
    int flag1=0, flag2=0;
    for (int k=0; k<5; k++){
        if (curr==samoglaski[k]) flag1=1;
        if (prev==samoglaski[k]) flag2=1;
    }
    if (flag1&&flag2) {
            printf("%c%c\n", prev,curr);
            vkupno++;}
    prev=curr;
    }
    printf("%d", vkupno);
    fclose(f);



  return 0;
}
