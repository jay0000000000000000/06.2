#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n, r;
int result;
int i; //���� ���� 

int factorial(int n)
{
	int res = 1;
	for(i=1; i <= n; i++)
	{
	  res = res * i;
    }
	return res;
}
//���丮�� �Լ� ȣ�� 

int combination (int n, int r)
{
	int div1, div2;//div1-����, div2-�и�
	
	div1 = factorial(n); //n!
	div2 = factorial(n-r) * factorial(r);
	
	//����, �и� ������ ����
	return (div1/div2);
}
//�м��Լ� ȣ�� 
		
		
int main(int argc, char *argv[])
{
	//�޽��� ���
	printf("input n : ");
	//n�Է�
	scanf("%d", &n);
	//�޽��� ���
	printf("input r : ");
	//r�Է� 
	scanf("%d", &r);
	
	//2.���ںи���
	result = combination(n,r);
	
	//3.���������
	//�и���ڳ����⿬��
	//result = div1/div2
	//������ 
	printf("result is %d\n", result);

    system("PAUSE");
	return 0;
}
	
		
	
	
