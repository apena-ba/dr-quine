#include <stdio.h>

void printCode(){
	char *s = "#include <stdio.h>%c%cvoid printCode(){%c%cchar *s = %c%s%c;%c%cprintf(s, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 10, 10);%c}%c%c%c// Non main comment%cint main(){%c%c// Main comment%c%cprintCode();%c}%c%c";
	printf(s, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 10, 10);
}


// Non main comment
int main(){
	// Main comment
	printCode();
}

