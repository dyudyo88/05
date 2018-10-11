#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int answer = 59;
	int num=0;
	
	do
	{
		printf("Guess a number:");
		scanf("%d",&x);
		num++;
		
			
		if(x<answer)
		{
			printf("low!\n");
		}
		
		else if(x>answer)
		{
			printf("high!\n");
		}
		
		else
		{
			printf("Congratulation");
		}
		
		
	}while(x !=answer);
	
	printf("trial : %i\n",num);
	
	
	return 0;	
	
}
	
	
	
