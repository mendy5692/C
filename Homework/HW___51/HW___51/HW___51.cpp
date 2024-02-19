#include<stdio.h>

void main() {
	char name_arr[] = "mendy mendelson";
//	printf("%s \n", name_arr);

	char *name_ptr = name_arr;

	while (*name_ptr != '\0')
	{
		printf("%c", *name_ptr);
		name_ptr++;
	}
    printf("\n\n");
}