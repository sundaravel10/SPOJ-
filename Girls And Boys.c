#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	float g,b;
	int r;
	while(1)
	{
	scanf("%f%f",&g,&b);
	if(g==-1 && b==-1)
	{
		break;
	}
	if(g==0 && b==0)
	{
		r=0;
	}
	else if(g==0)
	{
		r=b;
	}
	else if(b==0)
	{
		r=g;
	}
	    if(g<b){
	    g++;
	    //(float)(b/g);
	    r=ceil(b/g);
	    printf("%d\n",r);
	    
	}
	    else{
	    b++;
	    //(float)(g/b);
	r=ceil(g/b);
	printf("%d\n",r);
	}
	
		}
return 0;
}

