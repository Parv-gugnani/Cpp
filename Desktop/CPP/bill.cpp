#include <iostream>
using namespace std;
 
int main()
{   
    cout<<"Hello , Welcum to Frank's Carpet Cleaning Service"<<endl;
    cout<<"\nHow many rooms would you like cleaned ?";

    int number_of_rooms{0};
    cin>>number_of_rooms;
    
    const double price_per_room{40};
    const double sales_tax{0.05};
    const int estimate_expiry{30};
    

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"number_of_rooms:" <<number_of_rooms<<endl;
    cout<<"Price Per Room:$"<<price_per_room<<endl;
    cout<<"cost: $" << price_per_room*number_of_rooms<<endl;
    cout<<"Sales and taxes : $" << price_per_room*number_of_rooms*sales_tax<<endl;
    cout<<"===================================================="<<endl;
    cout<<"Total estimate:$ "<<(price_per_room*number_of_rooms)+(price_per_room+number_of_rooms*sales_tax)<<endl;
    cout<<"This Estimate is valid "<<estimate_expiry<<" days"<<endl;

    

    return 0;
}