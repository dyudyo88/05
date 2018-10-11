#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	char x;
	
	printf("input a char : ");
	scanf("%c",&x); //문자형은 %c로 받아야한다. 
	
	if('A'<=x && x<='Z')
	{
		printf("대문자입니다.");
	} 
	
	else if('a'<=x && x<='z')
	{
		printf("소문자입니다.");
	 } 
	 
	
	else if('0'<=x && x<='9') //작은 따옴표로 묶어줘야지 아스키코드가 된다. 
	{
		printf("숫자입니다.");
	}
	
	else
	{
		printf("기타 글자 입니다.");
	}
	

	return 0;	
	
}
	
	
	
