//Assignment 8: Calculator
#include <iostream>
#include <stdlib.h>
using namespace std;

double add(double num1,double num2)
{
    return num1 + num2;
}

double subtract(double num1,double num2)
{
    return num1 - num2;
}

double multiply(double num1,double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if(num2!=0)
    return num1 / num2;
    else
    cout<<"Invalid entry";
}

int main(){
    double num1, num2;
    char operation, q;
    
    cout<<"Calculator functions:"<<endl;
    cout<<"Enter 'm' for Multiplication"<<endl;
    cout<<"Enter 'd' for Division"<<endl;
    cout<<"Enter 'a' for Addition"<<endl;
    cout<<"Enter 's' for Subtraction"<<endl;
    cout<<"Select operation or 'q' to quit program"<<endl;
    cin>>operation;
    
    do{                                  
        if(operation=='s' || operation=='S')
        {
            cout<<"Enter first number"<<endl;
            cin>>num1;
            cout<<"Enter second number"<<endl;
            cin>>num2;
            cout<<"The difference is "<<subtract(num1,num2)<<endl;
            
        }
        
        if(operation=='a' || operation=='A')
        {
            cout<<"Enter first number"<<endl;
            cin>>num1;
            cout<<"Enter second number"<<endl;
            cin>>num2;
            cout<<"The sum is "<<add(num1,num2)<<endl;
        }
        
        if(operation=='m' || operation=='M')
        {
            cout<<"Enter first number"<<endl;
            cin>>num1;
            cout<<"Enter second number"<<endl;
            cin>>num2;
            cout<<"The product is "<<multiply(num1,num2)<<endl;
        }
        
        if(operation=='d' || operation=='D')
        {
            cout<<"Enter numerator"<<endl;
            cin>>num1;
            cout<<"Enter denominator"<<endl;
            cin>>num2;
            cout<<"The quotient is "<<divide(num1,num2)<<endl;
        }
        cout<<"Select operation or 'q' to quit program"<<endl;
        cin>>operation;
    }while(operation!='q' && operation!='Q');
        cout<<"Goodbye!"<<endl;
    system("pause");
    return 0;   
}
