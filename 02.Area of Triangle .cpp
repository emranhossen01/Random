#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,area;
    cout<<"The length of the side of the Triangle:"<<endl;
    cin>>a>>b>>c;

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The Area of Triangle:"<<area;
    return 0;
}
