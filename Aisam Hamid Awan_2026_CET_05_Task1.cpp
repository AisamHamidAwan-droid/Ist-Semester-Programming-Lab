#include<iostream>
using namespace std;
int main() {
 int num1,num2;
cout<<"Enter first number:";
cin>>num1;
cout<<"Enter second number:";
cin>>num2;
int remainder=num1%num2;
float average=(num1+num2)/2.0;
int square1=num1*num1;
int square2= num2*num2; 
cout<< "Remainder of both numbers="<<remainder<<endl;
cout<<"Average of both numbers=" << average<<endl;
cout<<"Square of first number=" << square1<<endl;
cout<<"Square of second number=" << square2<<endl;
return 0;
}
