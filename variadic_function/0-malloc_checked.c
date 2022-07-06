#include "main.h"
#include <sdtlip.h>
#include <stdio.h>

/**
*
*/

void *malloc_checked(unsigned int b)
{
	void p;
	void *ptr= &p;
	ptr = malloc(sizeof(point) * b));

	if (ptr == NULL)
	{
		return (98);
	}
	else 
	{
		*(pointer) = point;
	}
}
