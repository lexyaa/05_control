#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i, meter;
	
	while (i<3)
	{
		meter = i*1609;
		printf("%d 마일은 %d 미터입니다.\n", i, meter);
		i++;
	}
	return 0;
}
