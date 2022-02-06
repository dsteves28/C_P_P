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