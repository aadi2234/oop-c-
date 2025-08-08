#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//function prototypes
	float distance(float x1,float y1,float x2,float y2);
	float distance(float x1,float y1,float x2,float y2,float z1,float z2);
	float x1,x2,y1,y2,z1,z2;
	float dist;
	cout<<"Enter two co-ordinates of point-1:";
	cin>>x1>>y1;
	cout<<"Enter two co-ordinates of point-2:";
	cin>>x2>>y2;
	dist=distance(x1,y1,x2,y2);
	cout<<"\nDistance between two 2D points:-"<<dist;
	cout<<"\n\nEnter three co-ordinates of point-1:";
	cin>>x1>>y1>>z1;
	cout<<"Enter two co-ordinates of point-2:";
	cin>>x2>>y2>>z2;
	dist=distance(x1,y1,x2,y2,z1,z2);
	cout<<"\nDistance between three 3D points:"<<dist;
	return 0;
}
//function to find distance between two 2D points
float distance(float x1,float y1,float x2,float y2)
{
	float d;
	d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	return d;
}
//function to find distance between three 3D points
float distance(float x1,float y1,float x2,float y2,float z1,float z2)
{
	float d;
	d=sqrt((pow((x2-x1),2))+(pow((y2-y1),2))+(pow((z2-z1),2)));
	return d;
}
