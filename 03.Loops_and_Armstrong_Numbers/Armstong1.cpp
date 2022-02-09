#include <iostream>     // Use iostream functionality
using namespace std;    // Use namespace std

int main()
{
    int i=1, one, ten, hundred, count, total;   // Declare integer i (and set it to equal 1), one, ten, hundred, count, and total.
                                                
    cout<<"Armstrong Numbers\n";                // Output text: Armstrong Numbers
    cout<<"-----------------\n";                // Output text: an underline
    
    while (i<=500)                              // Start loop. Loop while i is less then or equal to 500
    {
        hundred=i/100;                          // Set hundred to equal i divided by 100
        count=i%100;                            // Set count to equal the remainder of i divided by 100
        ten=count/10;                           // Set ten to equal count divided by 100
        one=count%10;                           // Set one to equal the remainder of count divided by 100
        total=((hundred*hundred*hundred)+(ten*ten*ten)+(one*one*one));  // Set hundred to equal i divided by 100
        
         if (i==total)                               // Run if i equals total
            {cout<<total<<endl;}                     // Output total
            
        i++;                                    // Add 1 to i at the end of every Loop
    }
   
    
    return 0;                                   // End
}

