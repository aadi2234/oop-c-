//Practical No.13-2
//Program-2 To implement Hybrid Inheritance with Virtual Base class Cricketer -> Z Bowler,Batsman -> All Rounder classes
#include <iostream>
using namespace std;
//Grand parent Virtual Base class
class Cricketer
{
private:
char name[15];
char country[15];
public:
//Member function
void get_Cricketer(void)
{
cout<<"Enter Name: ";
fflush(stdin);
gets(name);
cout<<"Enter Country: ";
fflush(stdin);
gets(country);
}
//Member function
void put_Cricketer(void)
{
cout<<"Name: "<<name;
cout<<"\nCountry: "<<country<<"\n";
}
}; //End of Base class
//Parent class-1
class Bowler: virtual public Cricketer

{
private:
int Wickets;
public:
//Member function
void get_Wickets(void)
{
cout<<"Enter No. of Wickets: "; cin>>Wickets;
}
//Member function
void put_Wickets(void)
{
cout<<"No. of Wickets: "<< Wickets<<"\n";
}
}; //End of Parent class-1

//Parent class-2
class Batsman: virtual public Cricketer

{
private:
long Runs;
public:
//Member function
void get_Runs(void)
{
cout<<"Enter No. of Runs: "; cin>>Runs;
}

//Member function
void put_Runs(void)
{
cout<<"No. of Runs: "<< Runs<<"\n";
}
}; //End of Parent class-2

//Child class
class Allrounder: public Bowler, public Batsman

{
public:
//Member function
void display(void)
{
put_Cricketer();
put_Runs();
put_Wickets();
}
}; //End of child class

//Main function
int main()
{
Allrounder player ; //Object of Derived class
cout<<"Enter Information of Allrounder:\n";
player.get_Cricketer();
player.get_Runs();
player.get_Wickets();
cout<<"\nInformation of Allrounder:\n";
player.display();
return 0;
}
