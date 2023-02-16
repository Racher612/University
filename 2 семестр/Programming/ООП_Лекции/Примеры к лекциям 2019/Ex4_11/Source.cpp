#include <stdio.h> 
int main() {
	int i; char string[81];
	printf("Enter with scanf: ");
	for (i = 0; i < 3; i++) {
		scanf_s("%s", string, sizeof(string));
		printf("%s\n", string);
	}
	// Необходимо освободить буфер, содержащий код Enter !!!
	//while (getchar() != '\n'); 
	printf("Enter gets: ");
	gets_s(string, sizeof(string));
	printf("%s\n", string);
}
