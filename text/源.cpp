#include<stdio.h>
#include<stdlib.h>

extern int global;
int main()
{
	//这是什么意思呢
	printf("%d\n",global);
	system("pause");
	return 0;
}