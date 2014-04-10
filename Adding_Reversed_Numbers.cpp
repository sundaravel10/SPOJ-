#include<cstdio>
using namespace std;
long int sum=0;
long int func(long int i)
{   
    long int r;
    r=i%10;
        sum=(sum*10)+r;
        i=i/10;
        if(i!=0)
        func(i);
        return sum;
}
 
int main()
{
        long int n;
        long int i,j,s1,s2;
        scanf("%ld",&n);
        do
        {
                scanf("%ld" "%ld",&i,&j);
                sum=0;
                s1=func(i);
                sum=0;
                s2=func(j);
                long int c=s1+s2;
                while(c%10==0)
        {
                c=c/10;
        }
        sum=0;
           long int s=func(c);
                printf("%ld\n",s);
                n--;
}while(n>0);
        
}

