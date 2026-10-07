#include <iostream>
#include <cmath>
#define pi 3.1416
using namespace std;

int main() {
    int a;
    float r;

    cout<<"enter area of circle a: ";
    cin>>a;

    r = sqrt(a/pi);
    cout<<"radius of circle is: "<<r;
    
    return 0;
}