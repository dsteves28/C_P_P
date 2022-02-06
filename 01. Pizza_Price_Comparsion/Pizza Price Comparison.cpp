#include <iostream>                  // Use input and output stream
#include <iomanip>                   // Use iomanip
using namespace std;                 // Use namespace std

const double PI = 3.14159265;        //Set PI as a constant 

int main()
{
    int smalldi, largedi, smallr, larger;                         // Declaring integers
    double smallprice, largeprice, smallarea, largearea, smallsquare, largesquare;   // Declaring doubles
    
    cout<<"Welcome to the Pizza Consumers!" <<endl;               // Text to welcome people
    
    cout<<"Enter the diameter of a small pizza (in inches): ";    // Asking for input diameter of a small pizza
    cin >> smalldi;                                               // Input diameter of a small pizza
    cout<<"Enter the price of a small pizza: $";                  // Asking for input the price of a small pizza
    cin >> smallprice;                                            // Input the price of a small pizza
    
    cout<<"Enter the diameter of a large pizza (in inches): ";    // Asking for input diameter of a large pizza
    cin >> largedi;                                               // Input diameter of a large pizza
    cout<<"Enter the price of a large pizza: $";                  // Asking for input the price of a small pizza
    cin >> largeprice;                                            // Input the price of a large pizza
    
    smallr = smalldi/2;                                           // Diameter of small pizza divided by 2 to find the radius.
    smallarea = PI*smallr*smallr;                                 // PI * Radius * Radius to find the area.
    smallsquare = smallprice/smallarea;                           // The price divided by the area to find the price per inch.
    
    
    larger = largedi/2;                                           // Diameter of large pizza divided by 2 to find the radius.
    largearea = PI*larger*larger;                                 // PI * Radius * Radius to find the area.
    largesquare = largeprice/largearea;                           // The price divided by the area to find the price per inch.
    cout<<endl;
    
    cout<<"Small Pizza: " <<endl;                                 // Print small pizza
    cout<<"Diameter = "<<smalldi<<" inches"<<endl;                // Show the Diameter
    cout<<"Price = $"<<smallprice<<endl;                          // Show the Radius
    cout<<"Price per square inch = $"<<fixed<<setprecision(2)<<smallsquare<<endl;   // Round to 2 decimal places and
                                                                                    // show to price per square inch.
    cout<<endl;
    
    cout<<"Large Pizza: " <<endl;                                 // Print large pizza
    cout<<"Diameter = "<<largedi<<" inches"<<endl;                // Show the Diameter
    cout<<"Price = $"<<largeprice<<endl;                          // Show the Radius
    cout<<"Price per square inch = $"<<fixed<<setprecision(2)<<largesquare<<endl;   // Round to 2 decimal places and
                                                                                    // show to price per square inch.

    return 0;
}

