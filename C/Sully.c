#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int i = 5;

void copyAndRun(char *filename, char *progname){
	int file = open(filename, O_CREAT | O_WRONLY |O_TRUNC, 0644);
	char cmd[60];
	char *content = "#include <stdio.h>%c#include <unistd.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%cint i = %d;%c%cvoid copyAndRun(char *filename, char *progname){%c%cint file = open(filename, O_CREAT | O_WRONLY |O_TRUNC, 0644);%c%cchar cmd[60];%c%cchar *content = %c%s%c;%c%c%cdprintf(file, content, 10, 10, 10, 10, 10, i - 1, 10, 10, 10, 9, 10, 9, 10, 9, 34, content, 34, 10, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%csprintf(cmd, %cgcc -Wall -Wextra -Werror -o %%s %%s; ./%%s%c, progname, filename, progname);%c%csystem(cmd);%c%cclose(file);%c}%c%cint main(){%c%cif(i >= 0){%c%c%cchar filename[10];%c%c%cchar progname[8];%c%c%csprintf(filename, %cSully_%%d.c%c, i);%c%c%csprintf(progname, %cSully_%%d%c, i);%c%c%ccopyAndRun(filename, progname);%c%c}%c%creturn 0;%c}%c";

	dprintf(file, content, 10, 10, 10, 10, 10, i - 1, 10, 10, 10, 9, 10, 9, 10, 9, 34, content, 34, 10, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 10, 9, 10, 10);
	sprintf(cmd, "gcc -Wall -Wextra -Werror -o %s %s; ./%s", progname, filename, progname);
	system(cmd);
	close(file);
}

int main(){
	if(i >= 0){
		char filename[10];
		char progname[8];
		sprintf(filename, "Sully_%d.c", i);
		sprintf(progname, "Sully_%d", i);
		copyAndRun(filename, progname);
	}
	return 0;
}
