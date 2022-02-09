#include <iostream>     // Use iostream functionality
using namespace std;    // Use namespace std

int main()
{
    int i, one, ten, hundred, count, total;   // Declare integer i, one, ten, hundred, count, and total.
                                                
    cout<<"Armstrong Numbers\n";                // Output text: Armstrong Numbers
    cout<<"-----------------\n";                // Output text: an underline
    
    for (i=1; i<=500; i++)                      // Run for loop while i is less than or equal to 500. Set i to equal 1. Add 1 to i every time loop is run.
    {
        hundred=i/100;                          // Set hundred to equal i divided by 100
        count=i%100;                            // Set count to equal the remainder of i divided by 100
        ten=count/10;                           // Set ten to equal count divided by 100
        one=count%10;                           // Set one to equal the remainder of count divided by 100
        total=((hundred*hundred*hundred)+(ten*ten*ten)+(one*one*one));  // Set hundred to equal i divided by 100
        
         if (i==total)                               // Run if i equals total
            {cout<<total<<endl;}                     // Output total
            
    }
   
    
    return 0;                                   // End
}
