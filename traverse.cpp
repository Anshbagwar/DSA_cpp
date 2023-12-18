#include<stdio.h>
int main()
{
	//int a[5]={69,78,63,54,21};
	int n;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in an array: ");
	for(int i =0;i<n;i++)
	{
		scanf("%d\n",&arr[i]);
		
		
	}
	for(int i=0; i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

