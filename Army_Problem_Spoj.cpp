#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{   int t,m,g,a,b,flag;
	vector<int>M;
	vector<int>G;
	scanf("%d",&t);
	while(t--)
	{  flag=-1;
       printf("\n");
       scanf("%d%d",&g,&m);
       for(int i=0;i<g;i++){
       	scanf("%d",&a);
       	G.push_back(a);
       }
       for(int i=0;i<m;i++)
       {  
	   scanf("%d",&b);
       	M.push_back(b);
       }
       	if((*max_element(G.begin(),G.end()))<(*max_element(M.begin(),M.end())))
       	{    
       		//G.erase(max_element(G.begin(),G.end()));
       	//	cout<<std::find(G.begin(),G.end(),*max_element(G.begin(),G.end()));
       /*		if(G.empty())
       		{
       			flag=0;
       			break;
       		}
       	}*/
       	printf("MechaGodzilla");
       }
       	else
       	{
       	/*	M.erase(max_element(M.begin(),M.end()));
       		if(M.empty())
       		{  
       			flag=1;
       			break;
       		}
       	}
       }*/
       printf("Godzilla");
	   }
           G.clear();
           M.clear();
    }
	return 0;
}

