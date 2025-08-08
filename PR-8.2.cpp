//SYCM-I 		Roll No:15
//Date of Performance : 29/09/2022
//Practical : 8.2
//Title : Program to add two Distances in km & m using friend function
#include<iostream>
using namespace std;
class Distance
{
  private:
  int km,m;
  public:
  void get_distance(void)
  {
  	cin>>km>>m;
  }
  void put_distance(void)
  {
  	cout<<km<<"km "<<m<<"m"<<endl;
  }
  friend Distance sum(Distance &D1,Distance &D2);
};
  Distance sum(Distance &D1,Distance &D2)
  {
  	Distance D3;
  	int total,kilo_meter;
  	total=D1.m+D2.m;
  	kilo_meter=total/1000;
  	D3.m=total%1000;
  	D3.km=D1.km+D2.km+kilo_meter;
  	return D3;
  }
  int main()
  {
  	Distance D1,D2,D3;
  	cout<<"Enter Distance-1 in km-m: ";
  	D1.get_distance();
  	cout<<"Enter Distance-2 in km-m: ";
  	D2.get_distance();
  	D3=sum(D1,D2);
  	cout<<"Total Distance= ";
  	D3.put_distance();
  	return 0;
  }
