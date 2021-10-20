#include <stdio.h>

int main(void)
{
	int x = 8;
	int y;
	y = ++x;
	//y = x++;
	// Q: What is the output?
	printf("x = %d, y = %d\n", x ,y); 
	return 0;
}


