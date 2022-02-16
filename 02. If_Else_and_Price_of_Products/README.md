# IF ELSE

## Q1: Buying in Bulk Discount

```
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
```

## Q2: Book Club

```
#include <iostream>     // Use iostream functionality
using namespace std;    // Use namespace std

int main()
{
    int points, books;          // Set int variables

    cout << "How many book have you purchased this month? ";        // Output text asking how many books have been purchased
    cin >> books;                                                   // Input books
    
    if (books<=0)                                                   // Conditional statement run if books is less than or equal to 0
    {
      cout << "Please enter a number of book greater than 0."<<endl;    // Output text asking to enter a book greater than 0
            return 0;                                               // End program
    }
        
    else if (books>=4)                          // Conditional statement run if books is greater than or equal to 4
    {
        points =60;                             // Set points to 60
    }
    
    else if (books>=1 && books<=3)              // Conditional statement run if books is greater than or equal to 1 AND less than or equal to 3
    {
        switch (books)                          // Switch statement set to books
        {
        case 1:                                 // Run if number = 1
        points =5;                              // Set points to 5  
            break;                              // Ends execution of the nearest conditional statement
            
        case 2:                                 // Run if number = 2
        points =15;                             // Set points to 15
            break;                              // Ends execution of the nearest conditional statement
            
        case 3:                                 // Run if number = 3
        points =30;                             // Set points to 30
            break;                              // Ends execution of the nearest conditional statement
        }
    }

   cout << "Number of Books Purchased = "<<books<<" books" << endl;  // Output text stating number of books and output books
   cout << "Number of Points Earned = "<<points<<" points" << endl;  // Output text stating number of points and output points
   return 0;                                                         // End program
}
```