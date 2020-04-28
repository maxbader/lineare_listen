#include <string.h>
#include <stdlib.h>

char *myStrDup(const char *src){
	size_t count = strlen(src);
	char *des = malloc(sizeof(char) * (count + 1));
	strcpy(des, src);
	return des;
}
