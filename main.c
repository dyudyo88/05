#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0; //�ʱ�ȭ �ϱ�! 
	char str[100]; //�迭�� ũ�⸦ 100���� �����Ѱ���. 
	char c;
	
	
	printf("input a string:");
	//scanf("%s);
	
	while((c=getchar())!='\n') //�ѱ��ھ� �����ͼ� c�� ������ ���ش�.
	{
		if('0'<=c && '9'>=c)
		
		{
			num++;
		}
	}	
	
	 printf("the number of digits are %d", num);
	

	return 0;	
	
}
	
	
	
