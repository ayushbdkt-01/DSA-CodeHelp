#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    char op;
    cout<<"Enter operator: ";
    cin>>op;
    switch (op)
    {
    case '+':cout<<"Sum is: "<<a+b<<endl; 
        break;

    case '-':cout<<"Substraction is: "<<a-b<<endl; 
        break; 
    
    case '*':cout<<"Product is: "<<a*b<<endl; 
        break;

    case '/':cout<<"Division is: "<<a/b<<endl; 
        break;  

    case '%':cout<<"Modulus is: "<<a%b<<endl; 
        break;
    default:cout<<"Enter valid operator..."<<endl;
        break;
    }
    return 0;
}