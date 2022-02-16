```
#include <iostream>     // Use iostream functionality
using namespace std;    // Use namespace std

double getTuition();                                // Function prototype
double getGPA();                                    // Function prototype
double computeAid(double gpa, double tuition);      // Function prototype

int main()
{

    double tuition, gpa=2.0, aid;                   // Declare doubles
    
    tuition=getTuition();                           // tuition equals output of function getTuition
    gpa=getGPA();                                   // gpa equals output of function getGPA
    aid=computeAid(gpa,tuition);                    // aid equals output of function computeAid, which uses variables gpa and tuition
    
    if (aid>0)                                                                      // Run if aid is greater than o
        {cout<<"You are entitled to recieve $"<<aid<<" in financial aid."<<endl;}   // Output text, variable aid, and then text

return 0;
}

double getTuition()                                 // Function getTuition
    {
        int tuition;                                                            // Declare integer
        cout<<"Enter the Amount of your Tuition Cost, not to exceed $2000: ";   // Output text asking for input
        cin>>tuition;                                                           // Input variable tuition
        while (tuition>2000 || tuition<1)                                       // Run loop while tuition is greater than 2000 or less than 1
        {
        cout<<"Error! Improper input.\n";                                       // Output text saying error
        cout<<"Enter the Amount of your Tuition Cost, not to exceed $2000: ";   // Output text asking for input
        cin>>tuition;                                                           // Input variable tuition
        }
        cout<<endl;                                                             // Output a space
        return tuition;                                                         // Return tuition to main
    }

double getGPA()                                     // Function getGPA
    {
        double gpa;                                                             // Declare doubles
        cout<<"Enter your GPA (a value between 0 and 4.0): ";                   // Output text asking for input
        cin>>gpa;                                                               // Input variable gpa
        while (gpa>4.0 || gpa<0)                                                // Run loop while gpa is greater than 4.0 or less than 0
        {
        cout<<"Error! Improper input.\n";                                       // Output text saying error
        cout<<"Enter your GPA (a value between 0 and 4.0): ";                   // Output text asking for input
        cin>>gpa;                                                               // Input variable gpa
        }
        cout<<endl;                                                             // Output a space
        return gpa;                                                             // Return gpa to main
    }

double computeAid(double gpa, double tuition)       // Function computeAid
    {
        double aid=0;                                                               // Declare doubles
        if(gpa<2.0)                                                                 // Run if gpa is less than 2.0
            {cout<<"Sorry, you do not qualify academically for financial aid.";     // Output text saying that student gets no aid
                return 0;                                                           // End function
            }
        else if((gpa>=2.0)&&(gpa<3.0))                                              // Run if gpa is greater than or equal to 2.0 and less than 3.0
            {aid = tuition;}                                                        // aid is equal to tuition
        else                                                                        // Run if gpa is 3.0 to 4.0. Previous ifs are not met
            {aid = (tuition / 4) * gpa;}                                            // aid is equal to tuition divided by 4, then multiplied by gpa
        return aid;                                                                 // Return aid to main
    }
```    
