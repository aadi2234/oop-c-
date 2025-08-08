#include <iostream>
using namespace std;
class Addition
{
	int x,y;
	public:
	Addition(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	void display()
	{
		cout<<"Addition of 2 no`s:-"<<(x+y);
	}
};
int main()
{
	Addition a(15,1000);
	a.display();
	return 0;
}
