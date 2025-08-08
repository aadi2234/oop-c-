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
	cout<<"Enter Book Name: ";
	cin>>name;
	cout<<"Enter Book Price: ";
	cin>>cost;	
}
void display(void)
{
  cout<<"Item no: "<<item_no;
  cout<<"\nBook Name: "<<name;
  cout<<"\nBook Price: "<<cost;	
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




