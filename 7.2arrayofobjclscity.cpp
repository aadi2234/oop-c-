//SYCM-I 		Roll No:15
//Date of Performance : 19/09/2022
//Practical : 7.2
//Title : Program to accept and display information of cities and population using array
//        of objects.
#include<iostream>
using namespace std;
class city
{
  private:
  char city_name[15];
  long population;
  public:
  void getcity(void)
  {
  	cout<<"Enter City : ";
  	fflush(stdin);
	gets(city_name);
  	cout<<"Enter population : ";
  	cin>>population;
  }	
  void display(void)
  {
  	  cout<<city_name<<"\t"<<population<<"\n";	
  }
};
int main()
{
	city c[5];
	int i;
	cout<<"Enter information of 5 cities : \n";
	for(i=0;i<5;i++)
		c[i].getcity();
	cout<<"List of cities : \n";
	cout<<"City \t Population \n";
	for(i=0;i<5;i++)
		c[i].display();
	return 0;
}
