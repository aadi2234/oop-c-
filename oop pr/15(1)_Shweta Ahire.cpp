/*Practical No.15
Program to define a class polygon and calculate area of triangle & rectangle using pointer to derived
 class object
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
 #include<iostream>
 using namespace std;
 //Base class
 class polygon
 {
 	protected:
 		int width, height;
 	public:
 		//Member function-1
 		void get_dimensions(void)
 		{
 		 cout<<"Enter Width: "; cin>>width;
 		 cout<<"Enter Height :"; cin>>height; 
		}
		//Virtual function
		virtual void area(void)
		{
			//empty function
		}
 };
  //Derived class-1
  class triangle:public polygon
  {
  	public:
  		void area(void)
  		{
  		 float ar;
		   ar=(width*height)	/2.0;
		   cout<<"Area of Triangle= "<<ar;
		}
  };
  //Derived class-2
  class rectangle:public polygon
  {
   public:
   	void area(void)
   	{
   	 float ar;
		ar=width*height;
		cout<<"Area of Rectangle= "	<<ar;
    }
  };
  //main function
  int main()
  {
  	polygon*bptr;  //Base class pointer
  	triangle t; //Derived class object
  	cout<<"Enter Dimensions of Triangle:\n";
  	bptr=&t;  //Base pointer to derived object
  	bptr->get_dimensions(); //Acess base function
  	bptr->area(); //Acess derived class function
  	rectangle r;  //Derived class object
  	bptr=&r;  //Base pointer to derived object
  	cout<<"\n\nEnter Dimensions of Rectangle:\n";
  	bptr->get_dimensions(); //Acess base function
  	bptr->area(); //Acess derived class function
	  return 0; 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
