#include <iostream>
using namespace std;

int main()
{ 
    float c;
    float f;
    cout<<"enter temperature in celsius: ";
    cin>>c; 

    f = (c * 9/5) + 32;
    cout<<"temperature in fahrenheit is: "<<f;

    return 0;
}