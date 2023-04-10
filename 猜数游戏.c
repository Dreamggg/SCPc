#include"stdio.h"
#include"time.h"
int main()
{
	int a,b;
	int n=0;
	printf("计算机随机给一个1—100的数，由你来猜，若是在10次之内才出来，则说明游戏成功，否则，即为游戏失败！\n"); 
	srand((unsigned int)time(NULL));
	a=rand()%100+1;
	while(a!=b)
	{
		printf("请输入一个数：\n");
		scanf("%d",&b);
		if(a>b)
		{
			printf("偏小！\n");
		 } 
		 if(a<b)
		 {
		 	printf("偏大!\n");
		 }
		 n++;
	}
	if(n<=10)
	{
		printf("游戏成功！\n共猜了%d次。\n",n);
	}
	else
	{
		printf("游戏失败！\n");
	}
	system("pause");
	return 0;
}
