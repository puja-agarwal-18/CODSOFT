#include <iostream>
using namespace std;
int main(){
    double num1,num2;
    char op;
    cout<<"===== SIMPLE CALCULATOR ====="<<endl;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter operator(+,-,%,/,*)"<<endl;
    cin>>op;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    switch (op)
    {
    case '+':
        cout<<"Result =" <<num1+num2;
        break;
    case '-':
        cout<<"Result =" <<num1-num2;
        break;
    case '*':
        cout<<"Result =" <<num1*num2;
        break; 
    case '/':
    if(num2 != 0){
        cout<<"Result =" <<num1/num2;
    }else{
        cout<<"Division by zero is not allowed";
    }
        break;       
    default:
        cout<<"Invalid oprator";
    }
    return 0;
}