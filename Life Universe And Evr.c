#include<cstdio>
using namespace std;
long long int a[100000];
int main()
{
	
    int	cnt=0;
    a[0]=0;
    int i=0,n;
	while(1){
	 if(a[i-1]!=42)
	{
	     scanf("%d",&a[i]);
		i++;
		cnt++;
		
	}
		
	else{
			break;
		}
	}
	for(i=0;i<cnt-1;i++)
	{
		printf("%d",a[i]);
		printf("\n");
		
	}
	return 0;
}

