// wap for finding the volume of cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int r,h;
    float v;
    cout<<"enter the radius of cylinder:";
    cin>>r;
    cout<<"enter the height of cylinder:";
    cin>>h;
    v= 3.14*r*r*h;
    cout<<"volume of the cylinder is:"<<v;
    return 0;
}
