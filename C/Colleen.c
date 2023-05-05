#include <stdio.h>

/*
	This program will print its own source when run.
*/

void printCode(){
	char *s = "#include <stdio.h>%c%c/*%c%cThis program will print its own source when run.%c*/%c%cvoid printCode(){%c%cchar *s = %c%s%c;%c%cprintf(s, 10, 10, 10, 9, 10, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c}%c%cint main(){%c%c/*%c%c%cMain comment%c%c*/%c%cprintCode();%c}%c";
	printf(s, 10, 10, 10, 9, 10, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
}

int main(){
	/*
		Main comment
	*/
	printCode();
}
