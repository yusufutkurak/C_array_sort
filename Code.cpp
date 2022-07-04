#include <stdio.h>
int func(int, int *);
int main()
{
	int N,i,result;
	printf("Emter N:\n");
	scanf("%d",&N);
	int arr[N];
	
	printf("Enter %d integers\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",arr [i]);
	}
	
	result=func(N, arr);
	
	printf("%d",arr[result]);
	
	return 0;
}
int func(int n , int *ar)
{
	int i,j,min;
	int temp [n];
	
	for(i=0;i<n;i++)
	{
		temp [i]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;i++)
		{
			if(ar[i]==ar[j])
			temp[i]++;
		}
	}
		
		min=temp[0];
		
		for(i=0;i<n;i++){
		for(j=i;j<n;i++)
		{
			if(temp[i]<temp[j])
			min=temp[i];
		}
	}
	
	return min;
}
