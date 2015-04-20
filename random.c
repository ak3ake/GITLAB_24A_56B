#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	
	printf("Program#3: Random No.\n");
	printf("------------\n");
	srand(time(NULL));
	int r = rand();
	
	printf("Random no is %d\n",r);
}