#include <iostream>      // Use iostream functionality
#include <iomanip>       // Use iomanip functionality
using namespace std;     // Use namespace std

int main()
{
    int year=1;             // Declare integer: year and set it to equal 1
    float amount=1000.0;    // Declare float: amount and set it to 1000.0
    
    cout<<"Year\tAmount of Deposit\n";  // Output text "Year", then a tab, then "Amount of Deposit", and then a new line
    
    cout<<fixed<<setprecision(2);       // Set float(amount) to two decimal places
    
    while (year<=10)                    // Start loop. Loop while year is less then or equal to 10
    {
        amount=amount+(amount*0.05);        // Set amount to equal amount + (amount * five percent)
        cout<<year<<"\t"<<amount<<endl;     // Output Year, then a tab in text, and then Amount
        year++;                             // Every time the loop runs, add 1 to year
    }
    
    return 0;                               // End
}