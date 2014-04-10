#include<iostream>
#include<cstdio>
#include<map>
const int BASE = 11;
using namespace std;
map<long long,long long> dpMap; 
long long coins(long long num)
{
    if(dpMap.count(num))
        return dpMap[num];
    else
    {
        dpMap[num]=coins(num/2)+coins(num/3)+coins(num/4);
        return dpMap[num];
    }
 
}
int main()
{
    long long num,ans;
 
    for(int i=0;i<=BASE;i++)
        dpMap[i]=i;
    int n=1;
    while(n<=10) 
	    {   scanf("%lld",&num);
        ans=coins(num);
        printf("%lld\n",ans);
    }
    return 0;
}
