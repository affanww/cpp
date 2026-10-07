#include <iostream>
using namespace std;

#define pi 3.1416

int main() {
    int r;
    float vol;

    cout<<"enter radius of sphere: ";
    cin>>r;

    vol = (4.0/3.0) * pi * r * r * r;
    cout<<"volume of sphere is: "<<vol;
    return 0;   
}