#include<iostream>
using namespace std;
int main()
{
	int i,fact,s;
	cout<<"enter the number:";
	cin>>s;
	for(i=1;i<=s;i++)
	{
		fact=fact*i;
		cout<<"the factorial of"<<i<<"is"<<fact<<endl;
	}
	return 0;
}
