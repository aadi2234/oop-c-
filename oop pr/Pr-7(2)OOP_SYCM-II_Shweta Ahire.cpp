/*Write a C++ program to define a class City having data members  name,population.Accept and display data for 6 cities*/
#include<iostream>
using namespace std;
//class decleration
class City
{
private:  //data members
    char city_name[15];
    long population;
public:   //member functions
	void accept();
	void display();
};  //End of class
//Member function definition
void City::accept (void)    
{
	cout<<"Enter City Name: ";
	fflush(stdin);
	gets(city_name);
	cout<<"Enter City Population: ";
	cin>>population;
	return;
}
//Member function definition
void City::display(void)
{
	cout<<"\nCity: "<<city_name;
	cout<<"\nPopulation: "<<population<<"\n";
}
//Main function
int main()
{
	int i=0;
	City c[6];
	for(i=0;i<6;i++)
	{
		cout<<"Enter details of City: "<<i+1<<":\n";
		c[i].accept();
		cout<<"\n";
	}
	cout<<"\nDetails of entered cities with their population:";
	for(i=0;i<6;i++)
	{
		c[i].display();
	}
	return 0;
}
