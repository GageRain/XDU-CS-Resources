#include <stdio.h>

//声明一个函数来检验是否是水仙花数 
int isFlower(int i)
{
	int flag=1; //用于判断main中if语句 
	int ret=i;  //保存i的值 
	int a=0, sum=0;
		while( i>0 )
		{
			a = i%10;
			sum += a*a*a;
			i = i/10;
		} //算出sum各个位的三次方加和 
		
		if ( sum != ret ) flag = 0;
	
	return flag;
}

int main ()
{	
	int a,b,num=0;
	scanf("%d %d", &a, &b); 
	for(int t=a; t<=b; t++) //t遍历三位数
	{ 
		if(isFlower(t)) num++;
	}
	printf("%d", num);
	return 0; 
 }

