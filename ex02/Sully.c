int i = 5;
#include <stdio.h>
#include <stdlib.h>
#define S "int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%c#define S %c%s%c%cint main()%c{%cchar cmd[992];char path[992];char cmd2[992];FILE *fp;%cif (i < 0) exit(0);sprintf(path, %cSully_%cd.c%c, i);sprintf(cmd2,%c./Sully_%cd%c,i);fp = fopen(path, %cw%c);%cfprintf(fp,S,i-1,10,10,10,34,S,34,10,10,10/*M1*/,10/*M2*/,34,37,34,34,37,34,34,34,10/*M3*/,10/*M4*/,34,37,37,34,10/*M5*/,34,34,34,37,34,10/*return*/,10,10);%cfclose(fp);sprintf(cmd, %cclang -o Sully_%cd %cs%c,i,path);system(cmd);%cfp = fopen(path, %cr+%c);fseek(fp,8,SEEK_SET);fprintf(fp,%c%cd;%c,i);fclose(fp);%csystem(cmd2);return 0;%c}%c"
int main()
{
char cmd[992];char path[992];char cmd2[992];FILE *fp;
if (i < 0) exit(0);sprintf(path, "Sully_%d.c", i);sprintf(cmd2,"./Sully_%d",i);fp = fopen(path, "w");
fprintf(fp,S,i-1,10,10,10,34,S,34,10,10,10/*M1*/,10/*M2*/,34,37,34,34,37,34,34,34,10/*M3*/,10/*M4*/,34,37,37,34,10/*M5*/,34,34,34,37,34,10/*return*/,10,10);
fclose(fp);sprintf(cmd, "clang -o Sully_%d %s",i,path);system(cmd);
fp = fopen(path, "r+");fseek(fp,8,SEEK_SET);fprintf(fp,"%d;",i);fclose(fp);
system(cmd2);return 0;
}
