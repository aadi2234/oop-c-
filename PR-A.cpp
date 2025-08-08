#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int OOP,DMS,CGR,DSU,DTE,Total;
	float Percent;
	cout<<"Enter marks of 5-subject: ";
	cin>>OOP>>DMS>>CGR>>DSU>>DTE;
	Total=OOP+DMS+CGR+DSU+DTE;
	Percent=Total/5.0;
	cout<<"Result="<<Percent<<"%";
return 0;                                
}


