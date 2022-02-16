```
#include <iostream>     // Use iostream functionality
#include <iomanip>      // Use iomanip functionality
using namespace std;    // Use namespace std

int getNumber();                                    // Function prototype
double getSalary(int empNumbers);                   // Function prototype
double calcRaise(double salary);                    // Function prototype
double totalRaise(double raises, double total);     // Function prototype

int main()
{
int no=getNumber();                     // Declare integer no equals function getNumber

double sal,ras,total=0;                 // Declare doubles sal, ras, total=0
    
for (int i=1; i<=no; i++)               // Run for loop while i is less than or equal to 500. Set i to equal 1. Add 1 to i every time loop is run.
{
    sal=getSalary(i);                                                                   // sal equals output of function getSalary
    ras=calcRaise(sal);                                                                 // ras equals output of function calcRaise
    cout<<"Employee "<<i<<" recieves a raise of $"<<fixed<<setprecision(2)<<ras<<endl;  // Output text, variable i, text, set ras to 2 decimal places, output ras
    cout<<endl;                                                                         // Output space
    total=totalRaise(ras,total);                                                        // total equal output of function totalRaise
    
}    
cout<<"The total cost of raises: $"<<total<<endl;                                       // Output text and then total

return 0;                                                                               // End
}

int getNumber()                                 // Function getNumber
    {
        int n;                                                  // Declare integer n
        cout<<"Enter Number of Employees: ";                    // Ouput text asking for variable n
        cin>>n;                                                 // Input variable n
        cout<<endl;                                             // Ouput a space
        return n;                                               // Return s to main
    }

double getSalary(int i)                         // Function getSalary
    {   
        double s;                                               // Declare double s
        cout<<"Enter the salary for employee "<<i<<" : ";       // Ouput text asking for variable s and output variable i
        cin>>s;                                                 // Input variable s
        return s;                                               // Return s to main
    }

double calcRaise(double sal)                    // Function calcRaise
    {
        double r;                                               // Declare double r
        if(sal<=25000)                                          // Run if sal is greater than or equal to 25,000
            {r=sal*0.05;}                                           // r is equal to sal multiplied by 0.05
        else if((sal>25000.0)&&(sal<=35000))                    // Else run if sal is greater than 25,000 and less than or equal to 35,000
            {r=sal*0.04;}                                           // r is equal to sal multiplied by 0.04
        else                                                    // Else run if sal is greater than 35,000. Previous statements are not met.
            {r=sal*0.03;}                                           // r is equal to sal multiplied by 0.03
        return r;                                               // Return s to main
    }
    
double totalRaise(double ras, double total)     // Function totalRaise
    {
        return (ras+total);                                     // Return ras+total to main 
    }
```