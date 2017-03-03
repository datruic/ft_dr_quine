int i = 5;
#include <stdio.h>
#include <stdlib.h>
#define S "int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%c#define S %c%s%c%cint main()%c{%c%cchar cmd[992];char path[992];FILE *fp;%c%cif (i < 0) exit(0);sprintf(path, %cSully_%cd.c%c, i);fp = fopen(path, %cw%c);%c%cfprintf(fp,S,i-1,10,10,10,34,S,34,10,10,/*nl and tap for cmd*/10,9,10,9,34,37,34,34,34,10,9,10,9,34,37,37,37,34,/*nl and tap for return*/10,9,10);%c%cfclose(fp);sprintf(cmd, %cclang -o Sully_%cd %cs; ./Sully_%cd%c,i,path,i);system(cmd);%c%creturn 0;%c}"
int main()
{
	char cmd[992];char path[992];FILE *fp;
	if (i < 0) exit(0);sprintf(path, "Sully_%d.c", i);fp = fopen(path, "w");
	fprintf(fp,S,i-1,10,10,10,34,S,34,10,10,/*nl and tap for cmd*/10,9,10,9,34,37,34,34,34,10,9,10,9,34,37,37,37,34,/*nl and tap for return*/10,9,10);
	fclose(fp);sprintf(cmd, "clang -o Sully_%d %s; ./Sully_%d",i,path,i);system(cmd);
	return 0;
}
