//SYCM-I		Roll No:15
//Date of Performance : /10/2022
//Practical no: 12.2
//Title : Program to implement multilevel inheritance
#include<iostream>
#include<string.h>
using namespace std;
class car 
{
 private:
 char car_type[25];
 public:
 void getcar()
 {
 	fflush (stdin);
 	cout<<"Enter Car type:";
 	gets(car_type);
 }
 void putcar()
 {
 	cout<<"\nCar type:"<<car_type;
 }
};
class brand:public car
{
	private:
	char brand_name[25];
	int speed;
	public:
	void getbrand()
	{
		fflush (stdin);
		cout<<"Enter Car Brand:";
		gets(brand_name);
		cout<<"Enter Car MAX Speed:"; cin>>speed;
	}
	void putbrand()
	{
		cout<<"\nCar Brand:"<<brand_name;
		cout<<"\nCar MAX Speed:"<<speed;
	}
};
class model:public brand
{
	private:
	char model_name[25];
	float price;
	public:
	void getmodel()
	{
		fflush (stdin);
		cout<<"Enter Car Model:";
		gets(model_name);
		cout<<"Enter Car Price:"; cin>>price;
	}
	void putmodel()
	{
		cout<<"\nCar Brand:"<<model_name;
		cout<<"\nCar MAX Speed:"<<price;
	}
};
int main()
{
	model C;
	cout<<"Enter Information of Car:\n";
	C.getcar();
	C.getbrand();
	C.getmodel();
	cout<<"\nInformation of Car:\n";
	C.putcar();
	C.putbrand();
	C.putmodel();
	return 0;
}
