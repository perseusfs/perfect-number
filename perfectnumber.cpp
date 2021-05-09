#include<stdio.h>
int main(){
	int n,i,sum=0;
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if (sum>n) printf("abundant");
	else if (sum==n) printf("perfect");
	else if (sum<n) printf("deficient");
return 0;
}
