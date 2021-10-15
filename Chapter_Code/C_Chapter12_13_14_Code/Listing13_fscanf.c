// Listing13_fscanf.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void) {
	char str[SIZE];
	float f;
	FILE * fp;
	fp = fopen("myfile.txt", "w+");
	fprintf(fp, "%f %s", 3.1416, "PI");
	rewind(fp); // rewind for reading
	fscanf(fp, "%f", &f);
	fscanf(fp, "%s", str);
	printf("I have read: %f and %s\n", f, str);
	return 0;
}
