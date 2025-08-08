#include<string.h>
#include<iostream>
using namespace std;
class ostring
{
	char str[50];
	public:
	void accept()
	{
		cout<<"Enter a string:";
		gets(str);
	}
	void operator +(ostring o)
	{
		cout<<strcat(str,o.str);
	}
};
int main()
{
	ostring o1,o2;
	o1.accept();
	o2.accept();
	cout<<"\nConcatenated String:";
	o1+o2;
	return 0;
}
