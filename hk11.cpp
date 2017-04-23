#include<iostream>
#include<vector>
#include<stack>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test-->0){
		string str;
		cin>>str;
		int coll=0,start=0;
		for(int i = 0 ; i<str.size() ;i++){
			if(i+1<str.size() && str[i]==str[i+1])
			continue;
			if(i+1==str.size())
			break;
			if(str[i]=='l' && ((str[i+1]=='r') || (str[i+1]=='d')))
			{
				start=i+1;
				continue;
			}
			if(str[i]=='d' && str[i+1]=='r'){
				start=i+1;
				continue;
			}
			if(str[i]=='r' && str[i+1]=='l'){
				coll+=2;
				int local=0;
				for(int j = i-1 ; j>=start && str[j]=='r' ; j--)
				if(str[j]=='r')
				local++;
				int j;
				for(j = i+2 ; j<str.size() && str[j]=='l' ;j++)
				if(str[j]=='l')
				local++;
				coll+=local;
				start=j;
				i=j-1;
				continue;
			}
			if(str[i]=='r' && str[i+1]=='d'){
				int local=0;
				for(int j = i ; j>=start && str[j]=='r' ; j--)
				local++;
				coll+=local;
				start=i+1;		
				continue;		
			}
			if(str[i]=='d' && str[i+1]=='l'){
				int local=0,j;
				for(j = i+1 ; j<str.size() && str[j]=='l' ; j++)
				local++;
				start=j;
				coll+=local;
				i=j-1;
				continue;				
			}
		}
		cout<<coll<<endl;
	}
}
