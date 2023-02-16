#include <stdio.h>
#include <string.h>
void reverser(char s[], char sr[])
{
	int k;
	if (!strlen(s))  sr[0] = '\0';
	else {
		reverser(s + 1, sr);
		k = strlen(sr); sr[k] = s[0]; sr[k + 1] = '\0';
	}
}
int main(int argc, char* argv[])
{
	char s[20], sr[20];
	printf("Input string:");
	scanf("%s", s);
	reverser(s, sr);
	printf("Output string: %s\n", sr);
	return 0;
}
