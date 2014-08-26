#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[]) {

int main() {
	
	int counter, i, indexValue;

	FILE *file;
	file = fopen("input.txt", "r");
	
	if (file == NULL) {
		printf("Error loading file");
		return 0;
	}
	
	fscanf(file, "%d", &counter);

	for (i = 1; i <= counter; i++) {
		fscanf(file, "%d", &indexValue);
		printf("%d \n", indexValue);
	} 
	
	fclose(file);
}
