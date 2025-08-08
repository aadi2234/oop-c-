#include <iostream>
using namespace std;
class result
{
	private:
	int s1,s2,s3,s4,s5;
	public:
	void accept(int s1,int s2,int s3,int s4,int s5);
	float total(void);
	float percentage(void);
};
void result::accept(int s1,int s2,int s3,int s4,int s5)
{
	s1=s1;
	s2=s2;
	s3=s3;
	s4=s4;
	s5=s5;
}
float result::total(void)
{
	float total;
	total=s1+s2+s3+s4+s5;
	return total;
}
float result::percentage(void)
{
	float percent;
	percent=(s1+s2+s3+s4+s5)/100;
	return percent;
}
int main()
{
	result s;
	float to,per;
	int s1,s2,s3,s4,s5;
	cout<<"Enter 5-subject marks: ";
	cin>>s1>>s2>>s3>>s4>>s5;
	s.accept(s1,s2,s3,s4,s5);
	to=s.total();
	per=s.percentage();
	cout<<"Total marks: "<<to;
	cout<<"\nPercentage: "<<per;
	return 0;
}
