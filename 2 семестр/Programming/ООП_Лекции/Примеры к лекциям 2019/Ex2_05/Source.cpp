#include <stdio.h>
#include <string.h>
typedef struct {
	char test_name[10];
	int ball;
} test;
typedef struct {
	char family[22];
	test test_results[5];
} student;

int main(int argc, char* argv[])
{
	student stud[10];
	int i, n = 0;
	float avar_stud, avarage = 0;
	while (puts("Input families,subjects and marks or end"),
		scanf("%s", stud[n].family), strcmp(stud[n].family, "end") != 0)
	{
		for (avar_stud = 0, i = 0; i < 3; i++)
		{
			scanf("\n%s %d", stud[n].test_results[i].test_name,
				&stud[n].test_results[i].ball);
			avar_stud += stud[n].test_results[i].ball;
		}
		printf("Average mark: %s=%5.2f\n", stud[n].family, avar_stud / 3);
		avarage += avar_stud;
		n++;
	}
	printf("Group average mark=%5.2f\n", avarage / n / 3);
	return 0;
}
