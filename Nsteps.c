#include<cstdio>
using namespace std;
int i=0;
int main()
{
	 int t;
	scanf("%ld",&t);
	int x[t],y[t];
	for(;i<t;i++)
	{
		scanf("%ld%ld",&x[i],&y[i]);
	}
	i=0;
	while(t--)
	{
		if(x[i]==0 && y[i]==0)
		{
		printf("\n0");
}
		else if(x[i]==1 && y[i]==1){
		printf("\n1");
	}
		else if(y[i]==(x[i]-2) || y[i]==x[i]){ 			
		if(x[i]%2==0) 
			    printf("\n%d",x[i]+y[i]);
			else 
			    printf("\n%d",((x[i]+y[i])-1));
	}
	else
	{
		printf("\nNo Number");
	}
		i=i+1;
	}
	return 0;
}

