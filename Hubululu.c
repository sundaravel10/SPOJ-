#include<cstdio>
using namespace std;
int main()
{
	int t,s;
	long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld %d",&n,&s);
		if(s==0)
		{
			printf("Airborne wins.");
			
		}	
		else
		{
			printf("Pagfloyd wins.");
		}	
		printf("\n");
	}
	return 0;
}

