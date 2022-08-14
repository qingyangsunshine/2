#include<stdio.h>

//指针型函数应用

int *findnum(int arr[],int len,int c);

int main()
{
	int a[]={1,2,56,86,96};
	int num;
	printf("请输入一个数\n");
	scanf("%d",&num);
	int *p=findnum(a,5,num);
	if(p==NULL)
		printf("NOT FOUND\n");
	else
		printf("%p,%lu\n",p,p-a);
	return 0;
}

int *findnum(int arr[],int len,int c)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]==c)
			return arr+i;
	}
	return NULL;
}