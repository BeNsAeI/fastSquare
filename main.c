#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "sq.h"

int main(int argc, char**arg)
{
	srand(time(NULL));
	int r = rand() % 100;
	int res = sqInt(r);
	printf("Result of %d squared is %d. Controll with nxn: %d.\n",r,res,r*r);
	return 0;
}
