#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	char x;
	
	printf("input a char : ");
	scanf("%c",&x); //�������� %c�� �޾ƾ��Ѵ�. 
	
	if('A'<=x && x<='Z')
	{
		printf("�빮���Դϴ�.");
	} 
	
	else if('a'<=x && x<='z')
	{
		printf("�ҹ����Դϴ�.");
	 } 
	 
	
	else if('0'<=x && x<='9') //���� ����ǥ�� ��������� �ƽ�Ű�ڵ尡 �ȴ�. 
	{
		printf("�����Դϴ�.");
	}
	
	else
	{
		printf("��Ÿ ���� �Դϴ�.");
	}
	

	return 0;	
	
}
	
	
	
