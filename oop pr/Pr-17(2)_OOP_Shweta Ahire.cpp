/*Practical No.17.2
Program-2:Program to create Binary class and overload 4 arithmetic operators
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
 #include<iostream>
 using namespace std;
 class Binary
 {
 	private:
 		float no;
 	public:
 		void get_number(void)
 		{
 		 cout<<"Enter a number: ";
		  cin>>no;	
		}
		void put_number(void)
		{
		 cout<<no;
		}
		//Operator + function
	    Binary operator + (Binary obj2)
	    {
	     Binary obj;
		 obj.no=no+obj2.no;
		 return obj;	
		}
		//Operator - function
	    Binary operator - (Binary obj2)
	    {
	     Binary obj;
		 obj.no=no-obj2.no;
		 return obj;	
		}
		//Operator * function
	    Binary operator * (Binary obj2)
	    {
	     Binary obj;
		 obj.no=no*obj2.no;
		 return obj;	
		}
		//Operator / function
	    Binary operator / (Binary obj2)
	    {
	     Binary obj;
		 obj.no=no/obj2.no;
		 return obj;	
		}
 };
 //Main function
 int main()
 {
 	Binary obj1,obj2,result; //Create objects
 	cout<<"Object-1:\n";
 	obj1.get_number();
 	cout<<"Object-2:\n";
 	obj2.get_number();   //Addition of Objects
 	result=obj1 + obj2;  //Call operator + function
 	cout<<"\nAddition: ";
 	result.put_number();  //Subtraction of objects
 	result=obj1 - obj2;  //Call operator - function
 	cout<<"\nSubtraction: ";
 	result.put_number();  //Multiplication of objects
 	result=obj1 * obj2;  //Call operator * function
 	cout<<"\nMultiplication: ";
 	result.put_number(); //Division of objects
 	result=obj1 / obj2;  //Call operator / function
 	cout<<"\nDivision: ";
 	result.put_number();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
