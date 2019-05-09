#include<stdio.h>
#include<stdlib.h>

extern int global;
int main()
{
	printf("%d\n",global);
	system("pause");
	return 0;
}