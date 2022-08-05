#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e>>f;
   double area;

   area=.5*(((a*d)+(c*f)+(e*b))-((b*c)+(d*e)+(a*f)));
   
   cout<<"Area of Triangle:"<<abs(area);

   return 0;
}
