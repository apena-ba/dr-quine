#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define OPEN(file) open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644)
#define STR "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%c#define OPEN(file) open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644)%c#define STR %c%s%c%c#define FT(x) int main(){int file = OPEN(%cGrace_kid.c%c); dprintf(file, x, 10, 10, 10, 10, 10, 34, x, 34, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10, 10); close(file);}%c%c/*%c%cComment%c*/%c%cFT(STR)%c"
#define FT(x) int main(){int file = OPEN("Grace_kid.c"); dprintf(file, x, 10, 10, 10, 10, 10, 34, x, 34, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10, 10); close(file);}

/*
	Comment
*/

FT(STR)
