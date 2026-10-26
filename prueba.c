#include <stdio.h>
#include <string.h>
#include "libft.h"

#define buff_size 100

int main(void)
{
	char src[buff_size];
	void *prueba;
	
	prueba = memset(src, -1, 20);
	if (!prueba)
		puts("NULL");
	else
		puts((char *)prueba);
	return 0;
}
