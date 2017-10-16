#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "sq.h"

int main(int argc, char**arg)
{
	srand(time(NULL));
	int r = rand() % 100;
	int res = sq(r);
	printf("Result of %d squared is %d.\n",r,res);
	return 0;
}
