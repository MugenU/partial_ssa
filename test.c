#include <stdio.h>
#include <stdlib.h>

int main() {
	char temp = 'a';
	char *src = &temp;
	char *str = (char *)malloc(sizeof(char) * 10);
	str = src;
	*str = 'b';
	return 0;
}
