#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char buf[12]; // буфер
	int decimal, sign; // позиция дес. точки и знак
	int count=10; // количество разрядов
	int err; // код ошибки

	err = _ecvt_s(buf, 12, 3.1415926535, count, &decimal, &sign);
	printf("Converted value to string: %s\n", buf);
	printf("Decimal= %d, Sign= %d.", decimal, sign);

	return 0;
}
