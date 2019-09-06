// 检验字符串是否相等的函数

#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[])
{
	int i = 0;
	bool areEqual;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		++i;
	}

	if ( s1[i] == '\0' && s2[i] == '\0' ) {
		areEqual = true;
	} else {
		areEqual = false;
	}

	return areEqual;
}

int main(void)
{
	bool equalStrings(const char s1[], const char s2[]);
	const char stra[] = "String compare test";
	const char strb[] = "string";
	
	printf("%i\n", equalStrings(stra, strb));
	printf("%i\n", equalStrings(stra, stra));
	printf("%i\n", equalStrings(strb, "string"));
	
	return 0;
}

