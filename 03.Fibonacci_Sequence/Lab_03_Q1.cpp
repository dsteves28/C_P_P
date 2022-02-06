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
