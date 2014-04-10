#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

void func(string b,int rows,int cols){
	char grid[rows][cols];
	int i,j,cur=0;
//	while(ch=getchar()!='\n'){
//	}
//cout<<rows;
	for(i=0;i<rows;i++)
	{ //cout<<"t"<<'\n';
		for(j=0;j<cols;j++){
		//	cout<<"t";
		
			grid[i][j]=b.at(cur);
			//cout<<'\n'<<grid[i][j];
			++cur;
		}
	}
	for(i=1;i<rows;i+=2){
		for(j=0;j<cols/2;j++){
			int o=cols-j-1;
			char temp=grid[i][j];
			grid[i][j]=grid[i][o];
			grid[i][o]=temp;
			
		}
	}
		for(i=0;i<cols;i++){
			for(j=0;j<rows;j++){
				cout<<grid[j][i];
			}
		
	  }	cout<<'\n';
		
}
int main()
{
	string a;
	char ch;
	int c,n,j,r;
	while(1)
	{  cin>>c;
	   if(c==0)
	   break;
	   while(ch=getchar()!='\n'){
	   }
	   //cout<<"HIEEE"<<'\n';
	   getline(cin,a);
	   r=a.length()/c;
	   //char g[r][c];
	   func(a,r,c);
	   /*for(i=0;i<c;i++){
			for(j=0;j<r;j++){
				cout<<g[i][j];
			}*/
	}
	return 0;
}

