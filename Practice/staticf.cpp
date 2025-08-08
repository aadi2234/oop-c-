#include<iostream>
using namespace std;
class set
{
	int no1,no2;
	static int count;
	public:
	set(int n1,int n2)
	{
		no1=n1;
		no2=n2;
		count++;
		cout<<"Object-"<<count<<" created..\n";
	}
};
int set::count;
int main()
{
	set s(10,22);
	set s1(33,11);
	set s2(10,22);
	set s3(33,11);
	return 0;
}

