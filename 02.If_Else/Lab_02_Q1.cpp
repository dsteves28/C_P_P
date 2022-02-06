#include <iostream>     // Use iostream functionality
using namespace std;    // Use namespace std

int main()
{
   int price,product,totalcost;      // Set int variables

   price = 99;                       // price set to 99
   
    cout << "Enter Quantity of Product = ";     // Output text asking for radius 
    cin >> product;                             // Input product
    
    cout<<endl;                                 // Output a space
    
    if (product<=0)                             // Conditional statement run if product is less than or equal to 0
    {
      cout << "No Product has been selected. Please select at least 1 unit of Product." << endl;  // Output text saying Enter at least 1 product
      return 0;                                 // End program
    }
    else if (product<10)                        // Conditional statement run if radius is less than 10
    {
                                                // Run void
    }
    else if (10<=product && product<=19)        // Conditional statement run if product is greater than or equal to 10 AND less than or equal to 19
    {
        price = price*0.8;                      // price * 0.8 to find final price
    }
    else if (20<=product && product<=49)        // Conditional statement run if product is greater than or equal to 20 AND less than or equal to 49
    {
        price = price*0.7;                      // price * 0.7 to find final price
    }
    else if (50<=product && product<=99)        // Conditional statement run if product is greater than or equal to 50 AND less than or equal to 99
    {
        price = price*0.6;                      // price * 0.6 to find final price
    }
    else if (100<=product)                      // Conditional statement run if product is greater than or equal to 100
    {
        price = price*0.5;                      // price * 0.5 to find final price
    } 
    
   totalcost=price*product;                                             // price * product to find totalcost
   cout << "Total Units of Product = "<<product<<" Units" << endl;      // Output text stating Total Products and output product
   cout << "Cost of each Product = $"<<price<< endl;                    // Output text stating Cost of Each product and output price
   cout << "Total Cost = $"<<totalcost<< endl;                          // Output text stating Total Cost and output totalcost
   return 0;                                                            // End program
}
