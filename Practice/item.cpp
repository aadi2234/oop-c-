#include <iostream>
using namespace std;
class item
{
	//Data member
	private:
	int item_no;
	char name[50];
	float cost;
	//member functions
   	public:
void getdata(void)
{
	cout<<"Enter Item no: ";
	cin>>item_no;
	cout<<"\nEnter Item Name: ";
	cin>>name;
	cout<<"\nEnter Item Price: ";
	cin>>cost;	
}
void display(void)
{
  cout<<"Item no: "<<item_no;
  cout<<"\nItem Name: "<<name;
  cout<<"\nItem Price: "<<cost;	
}
}; //End of class
int main()
{
	item it;
	cout<<"Enter Information of Item:\n\n";
	it.getdata(); //call member function
	cout<<"\nInformation of Item:";
	it.display(); //call member function
	return 0;
}




