#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0; //초기화 하기! 
	char str[100]; //배열의 크기를 100으로 설정한거임. 
	char c;
	
	
	printf("input a string:");
	//scanf("%s);
	
	while((c=getchar())!='\n') //한글자씩 가져와서 c에 저장을 해준다.
	{
		if('0'<=c && '9'>=c)
		
		{
			num++;
		}
	}	
	
	 printf("the number of digits are %d", num);
	

	return 0;	
	
}
	
	
	
