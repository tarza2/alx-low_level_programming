#include <stdio.h>
#include <stdlib.h>


char *string_nconcat(char *s1 , char *s2,unsigned int n)
{
	unsigned int len1 = 0, len2 = 0 , i = 0 , j = 0;

	char *result;
	
	while(s1[len1])
		len1++;
	
	while(s2[len2])
		len2++;
	
	if (n < len2)
		result = malloc(sizeof(char) * (len1 + n +1));
	else
		result = malloc(sizeof(char) * (len1 + len2 + 1));

	if(!result)
		return NULL;

	while(s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	
	while( n < len2 && i < (len1 + n))
		result[i++] = s2[j++];
	while(n >= len2 && i < (len1 + len2))
		result[i++] = s2[j++];

	result[i] = '\0';
	return result;
}

		int main(void)
{
	char *concat;


	concat = string_nconcat("best","school !!",6);
	printf("%s",concat);
	free(concat);
	return 0;
}
