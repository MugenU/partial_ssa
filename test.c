#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch1= 'a';
	char *ch2 =  &ch1;
	*ch2 = 'b';
	char *str1 = (char *)malloc(sizeof(char ) * 10);
	str1 =  "cbd";
	char **str_ = &str1;
	str1 = ch2;
	printf("%s",  *str_);
	return 0;
}
