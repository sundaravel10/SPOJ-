#include<cstdio>
using namespace std;

int main()
{
	long long n;
	long long t,i;
	scanf("%lld",&t);
	
	while(t--)
	{   long long sum=0;
	printf("\n");
		scanf("%lld",&n);
		long long a[n];
		for(i=0;i<n;i++)
		{   scanf("%lld",&a[i]);
	//	printf("%lld",a[i]);
			sum=(sum+a[i+1-1])%n;
		}
		if(sum==0)
		printf("YES");
		else
		printf("NO");
	}
	return 0;
	
}

