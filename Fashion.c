#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{  int t;
 scanf("%d",&t);
 do
 {
 
    int n,sum=0,a[1050],b[1050],p,q;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p);
		a[i]=p;
}
	sort(a,a+n);
	for(int j=0;j<n;j++)
	{
		scanf("%d",&q);
		b[j]=q;
	}
sort(b,b+n);
 
	 for(int i=0;i<n;i++)
     {
       sum+=a[i]*b[i];
     }
     printf("%d\n",sum);
        t--;
    }while(t>0);
    return 0;
}

