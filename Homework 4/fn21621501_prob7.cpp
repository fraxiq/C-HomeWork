#include <iostream>
using namespace std;

int main()
{
	char a;
	cout<<"Vasil Levski e roden prez"<<endl<<"---a)1873"<<endl<<"---b)1778"<<endl<<"---c)1901"<<endl;
	cin>>a;
	switch (a)
	{
		case 'a': cout<<"Vqrno"; break;
		case 'b': cout<<"";
		case 'c': cout<<"Greshno"; break;
		default: cout<<"Nevalidno";
	}
	return 0;
}

