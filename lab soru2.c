#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *isimp;
	
	isimp = (char*)malloc(8 * sizeof(char));
    
    char isim[13]="eren suer";
    
    strcpy(isimp, isim);
    printf("%s", isim);
	
	return 0;
}
