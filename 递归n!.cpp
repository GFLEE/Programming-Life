#include <iostream>
using namespace std;
int func(int num)
{
	if(num<2)
	return num;
	
	else 
	{return num*func(num-1);
	 } 
	
}
int main(void)
{
	int number;
	cout<<"number= ";
	cin>>number;
	int sum=func(number);

	cout<<number<<"!"<<"="<<sum;
	
	return 0;
}
