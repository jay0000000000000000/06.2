#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n, r;
int result;
int i; //변수 선언 

int factorial(int n)
{
	int res = 1;
	for(i=1; i <= n; i++)
	{
	  res = res * i;
    }
	return res;
}
//팩토리얼 함수 호출 

int combination (int n, int r)
{
	int div1, div2;//div1-분자, div2-분모
	
	div1 = factorial(n); //n!
	div2 = factorial(n-r) * factorial(r);
	
	//분자, 분모 나누기 연산
	return (div1/div2);
}
//분수함수 호출 
		
		
int main(int argc, char *argv[])
{
	//메시지 출력
	printf("input n : ");
	//n입력
	scanf("%d", &n);
	//메시지 출력
	printf("input r : ");
	//r입력 
	scanf("%d", &r);
	
	//2.분자분모계산
	result = combination(n,r);
	
	//3.최종값출력
	//분모분자나누기연산
	//result = div1/div2
	//결과출력 
	printf("result is %d\n", result);

    system("PAUSE");
	return 0;
}
	
		
	
	
