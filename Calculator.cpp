#include<iostream>
using namespace std;

int main(){

int n1,n2;
cout<<"Enter two number: ";
cin>>n1>>n2;

char op;
cout<<"input an operator: ";
cin>>op;

switch (op){
case '+':
    cout<< n1+n2<< endl;
    break;
case '-':
    cout<< n1-n2<< endl;
    break;
case '*':
    cout<< n1*n2<< endl;
    break;
case '/':
    cout<< n1/n2<< endl;
    break;
default:
cout<< "Enter the another op" <<endl;
break;
}

return 0;



}
