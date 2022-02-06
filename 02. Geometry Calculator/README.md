```
#include <iostream>             // Use iostream functionality
using namespace std;            // Use namespace std

const double PI = 3.14159;      //Set PI as a constant

int main()
{
    int number, radius, length, width, base, height;    // Set int variables
    double area;                                        // Set double variables
    
    cout << "   Geometry Calculator  \n\n";             // Output Welcome text
    cout << "1. Calculate the area of a circle.\n";     // Output text describing option 1
    cout << "2. Calculate the area of a rectangle.\n";  // Output text describing option 2
    cout << "3. Calculate the area of a triangle.\n";   // Output text describing option 3
    cout << "4. Quit.\n";                               // Output text describing option 4
    cout<<endl;                                         // Adding a space 
    cout << "Enter your choice (1-4): ";                // Output text asking for an input of 1-4
    cin >> number;                                      // Input number of choice
    cout<<endl;                                         // Adding a space 
    
    if (number<=0 || number>=5)                         // Run if number is less than or equal to 0
        {cout << "Error! Invalid number! Please enter a number between 1-4." << endl;}      // Output text saying Error when previous statement is met    
    else                                                                                    // Do this when previous is conditional statement not met
    {
        switch (number)                                                                     // Switch statement set to number
        {
            case 1:                                                                         // Run if number = 1
            cout << "Enter Radius of the circle = ";                                        // Output text asking for radius
            cin >> radius;                                                                  // Input radius
            if (radius<=0)                                                                  // Conditional statement run if radius is less than or equal to 0
                {cout << "Error! Invalid number! Please enter a whole number." << endl;}    // Output text saying Error when previous statement is met    
            else                                                                            // Do this when previous is conditional statement not met 
            {
            area = PI*radius*radius;                                                        // PI * Radius * Radius to find the area.
            cout << "The Area of the circle is = " << area << endl;                         // Output text and area
            } 
                break;                                                                      // Ends execution of the nearest conditional statement
            
            case 2:                                                                         // Run if number = 2
            cout << "Enter the length of the rectangle = ";                                 // Output text asking for length
            cin >> length;                                                                  // Input length
            if (length<=0)                                                                  // Conditional statement run if length is less than or equal to 0 
                {cout << "Error! Invalid number! Please enter a whole number." << endl;}    // Output text saying Error when previous statement is met    
            else                                                                            // Do this when previous is conditional statement not met
            {
            cout << "Enter the Width of the rectangle = ";                                  // Output text asking for width
            cin >> width;                                                                   // Input width
            }
            if (length<=0 || width<=0)                                                      // Conditional statement run if length or width are less than or equal to 0
                {cout << "Error! Invalid number! Please enter a whole number." << endl;}    // Output text saying Error when previous statement is met    
            else                                                                            // Do this when previous is conditional statement not met
            {
            area = length * width;                                                          // length * width to find the area
            cout << "The Area of the rectangle is = "<< area << endl;}                      // Output text and area
                break;                                                                      // Ends execution of the nearest conditional statement
            
            case 3:                                                                         // Run if number = 3
            cout << "Enter the Base of the triangle = ";                                    // Output text asking for the base
            cin >> base;                                                                    // Input base
            if (base<=0)                                                                    // Conditional statement run if base is less than or equal to 0
                {cout << "Error! Invalid number! Please enter a whole number." << endl;}    // Output text saying Error when previous statement is met    
            else                                                                            // Do this when previous is conditional statement not met
            {
            cout << "Enter the Height of the triangle = ";                                  // Output text asking for height
            cin >> height;                                                                  // Input height
            }
            if (base<=0 || height<=0)                                                       // Conditional statement run if base or height is less than or equal to 0
                {cout << "Error! Invalid number! Please enter a whole number." << endl;}    // Output text saying Error when previous statement is met    
            else                                                                            // Do this when previous is conditional statement not met
            {
            area = base*height*0.5;                                                         // base * height * 0.5 to find the area    
            cout << "The Area of the triangle = " << area << endl;}                         // Output text and area
                break;                                                                      // Ends execution of the nearest conditional statement
            
            case 4:                                                                         // Run if number = 4
	      cout << "Exiting program..."<<endl;                                           // Output text saying Exiting program
                break;                                                                      // Ends execution of the nearest conditional statement
        }
    }

    return 0;                                                                               // End program
}

```

