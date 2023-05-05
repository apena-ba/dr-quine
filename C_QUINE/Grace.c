#include <stdio.h>
#include <fcntl.h>

#define STR "#include <stdio.h>%c#include <fcntl.h>%c%c#define STR %c%s%c%c#define FT(x) int main(){printf(x, 10, 10, 10, 34, x, 34, 10, 10, 10, 10, 10, 10);}%c%c// Comment%c%cFT(STR)%c"
#define FT(x) int main(){printf(x, 10, 10, 10, 34, x, 34, 10, 10, 10, 10, 10, 10);}

// Comment

FT(STR)
