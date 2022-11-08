#include<iostream>
using namespace std;
int main()
{
    char oper;
    float n1, n2;
    cout<<"\nEnter an operator (+,-,*,/,%): ";
    cin>>oper;
    cout<<"\nEnter two numbers: "<<endl;
    cin>>n1>>n2;
    switch(oper)
    {
        case '+':
            cout<<n1<<" + "<<n2<<" = "<<n1+n2;
            break;
        case '-':
            cout<<n1<<" - "<<n2<<" = "<<n1-n2;
            break;
        case '*':
            cout<<n1<<" * "<<n2<<" = "<<n1*n2;
            break;
        case '/':
            cout<<n1<<" / "<<n2<<" = "<<n1/n2;
            break;
        case '%':
			cout<<n1<<" % "<<n2<<" = "<<n1*100/n2;
			break;    
        default:
            cout<<"Error! The operator is not correct";
            break;
    }
    return 0;
}
