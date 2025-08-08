/*Practical No.18.2
Program-2:Program to find distance between two points in 2D & 3D using function overloading
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
 #include<iostream>
 using namespace std;
 #include<math.h>
 //Overload function prototypes
 float find_distance(float x1, float y1, float x2, float y2);
 float find_distance(float x1, float y1, float z1, float x2, float y2, float z2);
 int main()
 {
 	//Variable decleration
 	float x1,y1,x2,y2,z1,z2,distance;
 	cout<<"Enter 2 coordinates of 2D point-1: ";
 	cin>>x1>>y1;
 	cout<<"Enter 2 coordinates of 2D point-2: ";
 	cin>>x2>>y2;
 	distance=find_distance(x1,y1,x2,y2);  //Function call
 	cout<<"Distance between two 2D points= "<<distance;
 	cout<<"\n\nEnter 3 coordinates of 3D point-1: ";
 	cin>>x1>>y1>>z1;
 	cout<<"Enter 3 coordinates of 3D point-2: ";
 	cin>>x2>>y2>>z2;
 	distance=find_distance(x1,y1,z1,x2,y2,z2);  //Function call
 	cout<<"Distance between two 3D points= "<<distance;
 	return 0;
 }
 //Function to find distance between two 2D points
 float find_distance(float x1, float y1, float x2, float y2)
 {
 	float dist;
 	dist=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
 	return dist;
 }
 //Function to find distance between two 3D points
 float find_distance (float x1, float y1, float z1, float x2, float y2, float z2)
 {
 	float dist;
 	dist=pow(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)),0.5);
 	return dist;
 }
 
 
 
 
 
 
 
 
 
 
 
 
