#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str = NULL;
	char *s2 = NULL;
	char *s3 = NULL;
	char *s4 = NULL;
/*
dd	(int)memmove(str, s4, 0);
	(int)ft_memmove(s2, s3, 0);
	printf("real : %s %s\n", str, s4);
	printf("mine : %s %s\n", s2, s3);
	return 0;*/
	printf("%s\n", memcpy(NULL, NULL, 0));
}