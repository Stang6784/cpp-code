#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[30] = "My Bitrthday";
	char str2[30] = "20 September 2008";
	char str3[30];
	strcpy(str3, str1);
	strcat(str1, str2);
	printf("str1 = %s\n", str1);
	printf("str3 = %s\n", str3);
	return(0);
}