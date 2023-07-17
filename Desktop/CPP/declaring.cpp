#include <iostream>
using namespace std;

int main()
{   
    int area;
    
    cout<<"Enter The Width of Room:";
    int width{0};
    cin>>width;

    cout<<"Enter The Length of Room:";
    int length{0};
    cin>>length;

    cout<<"Area of Room is :"<<width*length<<"Sqaure Feet"<<endl;
    cout<<"Perimeter of room is : :"<< 2 * (length + width);
    



    
    return 0;
}