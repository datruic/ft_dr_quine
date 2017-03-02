int	i = 5;
#include <stdio.h>
#include <stdlib.h>
#define S "int i = %d;%c"
int main()
{
	char	cmd[992];

	if (i == 4)
		return 1;
	printf(S,i-1,10);
	sprintf(cmd, "./Sully > Sully_%d.c; clang -o Sully Sully_%d.c; ./Sully",i-1, i-1);











	// FILE	*fp;
	// char	path[992];
	// char	cmd[992];
	// if (i == 0)
	// 	return 1;
	// sprintf(path, "Sully_%d.c", i);
	// fp = fopen(path, "w");
	// fprintf(fp,S,i-1,10);
	// fclose(fp);
	// sprintf(cmd, "clang -o Sully %s; ./Sully", );
	system(cmd);
	return 0;
}