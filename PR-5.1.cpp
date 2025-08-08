//Practical No.5
//Multiply 3*3 matrix
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
int main() 
{
	int A[3][3],B[3][3],C[3][3];
	int i,j,k;
	cout<<"Enter 9-elements of matrix-A:\n";
	for(i=0;i<3;++i)
	   {
	   	for(j=0;j<3;++j)
	   	   {
	   	   	cin>>A[i][j];
		   }
	   }
	cout<<"Enter 9-elements of matrix-B:\n";
	for(i=0;i<3;++i)
	   {
	   	for(j=0;j<3;++j)
	   	   {
	   	   	cin>>B[i][j];
		   }
	   }
    /*Matrix Multiplication*/ 
	for(i=0;i<3;++i)
	   {
	   	for(j=0;j<3;++j)
	   	   {
	   	   	C[i][j]=0;
	   	   	for(k=0;k<3;++k)
	   	   	{
	   	   		C[i][j]=C[i][j]+A[i][k]*B[k][j];
	   	   		
		    }
		   }
	   }
	cout<<"Multipication of matrix C:\n";
	for(i=0;i<3;++i)
	   {
	   	for(j=0;j<3;++j)
	   	   {
	   	   	cout<<C[i][j]<<" ";
		   } 
		cout<<endl;
	   }
	return 0;
}
