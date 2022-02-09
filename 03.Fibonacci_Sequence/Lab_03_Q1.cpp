#include <iostream>     // Use iostream functionality
using namespace std;    // Use namespace std

int main()
{
    int n;              // Declare integer n
    int F, F1=0, F2=1;  // Declare integer F, F1, and F2. Set F1=0 and F2=1
    cout<<"Fibonacci Sequence\n";                   // Output text: title of program
    cout<<"------------------\n";                   // Output text: underline
    cout<<"Enter a postive integer(3,4,5,6...): ";  // Output text asking for input of n
    cin>>n;                                         // Input n
    cout<<endl;                                     // Space
    if(n<3)                                         // Run if n is less than 3
    {cout<<"Error! Wrong Number of Terms\n";}       // Output text saying Error
    else                                            // Do this when previous is conditional statement not met
    {
        cout<<F1<<"  "<<F2;                         // Output value of F1 and F2 with space in between them
    }
    for (int i=3; i<=n; i++)        // Loop when i <= n. End Loop when i > n. Declare integer i = 3. Add 1 to i every time loop is run.
    {
        F=F1+F2;                    // Set F to equal F1 + F2
        cout<<"  "<<F;              // Output a space in the text and then output F
        F1=F2;                      // Set F1 to F2
        F2=F;                       // Set F2 to F
    }
    cout<<endl;                     // Space
    
    return 0;                       // End 
}

