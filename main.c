#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int answer = 55;
	int input;
	int cnt=0;
	
	do
	{
		printf("Guess a number :");
		scanf("%d", &input);
	
		if(input < answer)
		{
			printf("Low!\n");
		}
		else if(input > answer)
		{
			printf("High!\n");
		}
		cnt++;
	}
	while(input != answer);
	
	printf("Congratulation. trial : %i\n", cnt);
	
	return 0;
}

