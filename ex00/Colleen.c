#include <stdio.h>

char	*s = "#include <stdio.h>%c%cchar%c*s = %c%s%c;%c%cint main()%c{%c%c//main function begins here;%c%cprintf(s,10,10,9,34,s,34,10,10,10,10,9,10,9,10,9,10,10,10,10);%c%creturn 0;%c}%c%c//my program ends here.%c";

int main()
{
	//main function begins here;
	printf(s,10,10,9,34,s,34,10,10,10,10,9,10,9,10,9,10,10,10,10);
	return 0;
}

//my program ends here.
