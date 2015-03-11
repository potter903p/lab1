#include <iostream>
using namespace std;

int fun(int a)
{
	int b;
	b = a%2;
	if(b==0)
	{
		a=a/2;
	}
	else if(b!=0)
	{
		a=3*a+1;
	}
	return a;
}
int main()
{
	int input;
	cout<<"input :";
	cin>>input;
	cout<<input<<endl;
	
	while(input!=1)
	{
		cout<<input<<" ";
		input=fun(input);
	}	
	cout<<endl;
	return 0;
}


