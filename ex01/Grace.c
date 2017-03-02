#include <stdio.h>
#define S "#include <stdio.h>%c#define S %c%s%c%c#define EXEC int main(){FILE *fp;fp=fopen(%cGrace_kid.c%c,%cw%c);fprintf(fp,S,10,34,S,34,10,34,34,34,34,10,10,10,10);fclose(fp);return 0;}%c%c//executing macro is called%cEXEC;%c"
#define EXEC int main(){FILE *fp;fp=fopen("Grace_kid.c","w");fprintf(fp,S,10,34,S,34,10,34,34,34,34,10,10,10,10);fclose(fp);return 0;}

//executing macro is called
EXEC;
