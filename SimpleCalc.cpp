#include<iostream>
using namespace std;
int main(){
    char op;
    float a, b, result;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    cout<<"Enter the operations('+','-','*','/'): ";
    cin>>op;
    switch(op){
        case '+':
        result = a + b;
        break;
        case '-':
        result = a - b;
        break;
        case '*':
        result = a * b;
        break;
        case '/':
        if(b != 0){
            result = a / b;
            break;
        }else{
            cout<< "Error!";
            return 1;
        }
        break;
        default:
        cout<< "Invalid!!!";
        return 1;

    }
    cout<< "Output: "<< result <<endl;
}