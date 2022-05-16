#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *isimp;
	
	isimp = (char*)malloc(4 * sizeof(char));
	strcpy(isimp, "eren");
	
    isimp = realloc(isimp, 4 * sizeof(char));
	strcat(isimp, " suer");
	
	printf("%s", isimp);
	return 0;
}
