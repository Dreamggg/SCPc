#include"stdio.h"
#include"time.h"
int main()
{
	int a,b;
	int n=0;
	printf("����������һ��1��100�������������£�������10��֮�ڲų�������˵����Ϸ�ɹ������򣬼�Ϊ��Ϸʧ�ܣ�\n"); 
	srand((unsigned int)time(NULL));
	a=rand()%100+1;
	while(a!=b)
	{
		printf("������һ������\n");
		scanf("%d",&b);
		if(a>b)
		{
			printf("ƫС��\n");
		 } 
		 if(a<b)
		 {
		 	printf("ƫ��!\n");
		 }
		 n++;
	}
	if(n<=10)
	{
		printf("��Ϸ�ɹ���\n������%d�Ρ�\n",n);
	}
	else
	{
		printf("��Ϸʧ�ܣ�\n");
	}
	system("pause");
	return 0;
}
