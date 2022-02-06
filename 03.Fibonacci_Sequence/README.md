# Basic Loops

## Q1: Fibonacci Sequence
```
#include <iostream>

using namespace std;

int main()
{
    int n;
    int F, F1=0, F2=1;
    cout<<"Enter a postive integer(3,4,5,6...): ";
    cin>>n;
    if(n<3)
    {cout<<"Wrong Number of Terms\n";}
    else
    {
        cout<<F1<<"  "<<F2;
    }
    for (int i=3; i<=n; i++)
    {
        F=F1+F2;
        cout<<"  "<<F;
        F1=F2;
        F2=F;
    }
    cout<<endl;
    
    return 0;
}
```

## Q2: Interest Growth
```
#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
    int year=1;
    float amount=1000.0;
    
    cout<<"Year\tAmount of Deposit\n";
    
    cout<<fixed<<setprecision(2);
    
    while (year<=10)
    {
        amount=amount+(amount*0.05);
        cout<<year<<"\t"<<amount<<endl;
        year++;
    }
    
    return 0;
}
```