#include<stdio.h>
#include "assert.h"

void fred(int* arg)
{
	int i=0, j=0;
	printf("fred : you passed %d\n", arg[0]);
	for(int i=1;i<50;i++){
		printf("%d: ",i);
		for(j=1;j<50;j++){
			assert((int)(i*j/40) < 40);
			printf("%d ", arg[(int)(i*j/40)]);
		}
		printf("\n");
	}
	printf("Done!!!\n");

}
