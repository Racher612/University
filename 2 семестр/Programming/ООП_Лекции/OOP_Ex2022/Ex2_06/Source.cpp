#include <stdio.h>
#include <string.h>
struct zap {
	char det[10];
	float diam;
	zap *p;
};
int main()
{
	zap a, *r, *q, *f;
	r = new zap;
	r->p = nullptr;
	puts("Input strings");
	scanf("%s %f\n", r->det, &r->diam);
	while ((scanf("\n%s", a.det)), strcmp(a.det, "end") != 0)
	{
		scanf("%f", &a.diam);
		q = r;
		r = new zap;
		strcpy(r->det, a.det);
		r->diam = a.diam;
		r->p = q;
	}
	q = r;
	do {
		if (q->diam < 1)
		{
			if (q == r) {
				r = r->p;
				delete q;
				q = r;
			}
			else {
				q = q->p;
				delete f->p;
				f->p = q;
			}
		}
		else {
			f = q;
			q = q->p;
		}
	} while (q != nullptr);
	q = r;
	puts("Result");
	if (q == nullptr) puts("No information");
	else do {
		printf("%s %5.1f\n", q->det, q->diam);
		q = q->p;
	} while (q != nullptr);
	return 0;
}
