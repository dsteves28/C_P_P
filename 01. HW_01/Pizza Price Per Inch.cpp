#include <iostream>
using namespace std;

const double PI = 3.14;

int main()
{
    int smalldi, largedi, smallr, larger;
    double smallprice, largeprice, smallarea, largearea, smallsquare, largesquare;
    
    cout<<"Welcome to the Pizza Consumers!" <<endl;
    
    cout<<"Enter the diameter of a small pizza (in inches): ";
    cin >> smalldi;
    cout<<"Enter the price of a small pizza: $";
    cin >> smallprice;
    
    cout<<"Enter the diameter of a large pizza (in inches): ";
    cin >> largedi;
    cout<<"Enter the price of a large pizza: $";
    cin >> largeprice;
    
    smallr = smalldi/2;
    smallarea = PI*smallr*smallr;
    smallsquare = smallprice/smallarea;
    
    
    larger = largedi/2;
    largearea = PI*larger*larger;
    largesquare = largeprice/largearea;

    cout<<endl;
    
    cout<<"Small Pizza: " <<endl;
    cout<<"Diameter = "<<smalldi<<" inches"<<endl;
    cout<<"Price = $"<<smallprice<<endl;
    cout<<"Price per square inch = $"<<smallsquare<<endl;
    cout<<endl;
    
    cout<<"Large Pizza: " <<endl;
    cout<<"Diameter = "<<largedi<<" inches"<<endl;
    cout<<"Price = $"<<largeprice<<endl;
    cout<<"Price per square inch = $"<<largesquare<<endl;

    return 0;
}
