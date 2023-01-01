#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
 
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
        
        bool flag=false;
       
		for(int j=0;j<str.length();j++)
		{
			if((str[i]=='0' && str[i+1]=='1' && str[i+2]=='0'))         
			{
                 cout<<"Good"<<'\n';
                 break;
                    
			}

			else if((str[i]=='1' && str[i+1]=='0' && str[i+2]=='1'))         
			{
                 cout<<"Good"<<'\n';
                 break;
                 
			}


			else cout<<"Bad"<<'\n';break;

			
		} 
	}

	return 0;
}