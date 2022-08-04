#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,a2,b2;

    cin>>a1>>b1;
    cin>>a2>>b2;

    double area=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));

    cout<<area<<endl;
    return 0;

}
