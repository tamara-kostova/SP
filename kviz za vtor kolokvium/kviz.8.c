#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
	FILE *f=fopen("dat.txt","r");
	int start=0, end=0, mstart=0, mend=0, flag=0,max=0;
	char c, zbor[100],linija[100], maxlinija[100];;
	while(fgets(linija,100,f)!=NULL){
        int l=strlen(linija);
        for (int i=0; i<l; i++){
            if (isdigit(linija[i])){
                if(!flag){
                    flag=1;
                    start=i;
                }
                end=i;
            }
        }
            if(start!=end){
                  if(l>=max){
                    max=l;
                    strcpy(maxlinija,linija);
                    mstart=start;
                    mend=end;
                    }
        }
	}
strncpy(zbor,maxlinija+mstart,mend-mstart+1);
zbor[mend-mstart+1]='\0';
printf("%s\n",zbor);
fclose(f);
return 0;
}
