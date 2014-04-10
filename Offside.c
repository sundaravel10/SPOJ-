#include<cstdio>
#include<algorithm>
using namespace std;
int flag=0;
int main()
{   int a,d;
    long b[12],c[12];
while(1){
flag=0;
    scanf("%d%d",&a,&d);
if(a==0)
break;
    for(int i=0;i<a;i++)
    {
        scanf("%ld",&b[i]);
        
    }
    for(int j=0;j<d;j++)
    {
        scanf("%ld",&c[j]);
        
    }
    sort(c,c+d);
    for(int i=0;i<a;i++)
    {
            if(b[i]>=c[1]){
            flag=1;
            
            }
            else{
            flag=0;     
            break; 
			}
    
    }
    if(flag==1)
    printf("N\n");
    else
    printf("Y\n");
}
return 0;
}

