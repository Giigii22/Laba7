#include <stdio.h>

void incrementHEapVariable(void)
{
	int* p = (int*)malloc(sizeof(int));
	printf("Enter number ");
	scanf_s("%d", p);
	printf("Address of the variable: %p Value: %d.\n", p, *p);
	++* p;
	printf("After increasing by 1 - %d\n", *p);
	free(p);
}
void main()
{
	incrementHEapVariable();
}