#include <iostream>

using namespace std;

int main()
{
    int i, one, ten, hundred, count, total;
    
    cout<<"Armstrong Numbers\n";
    cout<<"-----------------\n";
    
    for (i=1; i<=500; i++)
    {
        hundred=i/100;
        count=i%100;
        ten=count/10;
        one=count%10;
        total=((hundred*hundred*hundred)+(ten*ten*ten)+(one*one*one));
        
         if (i==total)
            {cout<<total<<endl;}
            
    }
   
    
    return 0;
}
