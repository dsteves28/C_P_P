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
