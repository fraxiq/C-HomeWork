#include <iostream>
#include <cmath>
using namespace std;
	
	bool tri(double a, double b, double c, double &P, double &S)
	{
		if(!(a<(c+b)&&b<(a+c)&&c<(a+b))) return false;
		else
		P=a=b+c;
		double p=P/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		return true;
	}
	
int main()
{
	double a,b,c,P,S;
	cout<<"Vavedi strani na triagalnika:";
	cin>>a>>b>>c;
	if(tri(a,b,c,P,S)) cout<<"Ima takav triagalnik"<<endl<<"S="<<S<<endl<<"P="<<P;
	else cout<<"Nqma takav triagalnik";
	return 0;
}

