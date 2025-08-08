//SYCM-I		Roll No:15
//Date of Performance : 03/11/2022
//Practical no: 13.2
//Title : Program to implement hybrid inheritance
#include<iostream>
using namespace std;
class Cricketer
{
	private:
	char name[25];
	char country[25];
	public:
	void get_name(void)
	{
		cout<<"Enter Name:"; gets(name);
	    fflush(stdin);
		cout<<"Enter Country Name:";  gets(country);
	}
	void put_name(void)
	{
		cout<<"Name:"<<name;
		cout<<"\nCountry:"<<country;
	}
};
class Bowler:virtual public Cricketer
{
	private:
	int wickets;
	public:
	void get_wickets(void)
	{
		cout<<"Enter no. of wickets taken:"; cin>>wickets;
	}
	void put_wickets(void)
	{
		cout<<"\nNo. of wickets taken:"<<wickets;
	}
};
class Batsman:virtual public Cricketer
{
	private:
	int runs;
	public:
	void get_runs(void)
	{
		cout<<"Enter no. of Runs:"; cin>>runs;
	}
	void put_runs(void)
	{
		cout<<"\nNo. of Runs:"<<runs;
	}
};
class Alrounder:public Bowler,public Batsman
{
	public:
	void display(void)
	{
		put_name();
		put_runs();
		put_wickets();
	}
};
//main program
int main()
{
	Alrounder player;
	cout<<"Enter information of Cricketer:\n";
	player.get_name();
	player.get_runs();
	player.get_wickets();
	cout<<"\nInformation of Cricketer:\n";
	player.display();
	return 0;
}
