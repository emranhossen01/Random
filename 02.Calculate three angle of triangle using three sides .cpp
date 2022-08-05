#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double A,B,C,a,b,c;
    cin>>a>>b>>c;

    A= acos(((c*c)+(b*b)-(a*a))/(2*b*c))*(180/M_PI);

    B= acos(((c*c)+(a*a)-(b*b))/(2*c*a))*(180/M_PI);

    C= acos(((a*a)+(b*b)-(c*c))/(2*a*b))*(180/M_PI);

    cout<<"A"<<"="<<A<<endl<<"B"<<"="<<B<<endl<<"C"<<"="<<C;

    return 0;
}
