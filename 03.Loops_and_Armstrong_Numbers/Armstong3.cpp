#include <iostream>

using namespace std;

int main()
{
    int i=1, one, ten, hundred, count, total;
    
    cout<<"Armstrong Numbers\n";
    cout<<"-----------------\n";
    
    do {
        hundred=i/100;
        count=i%100;
        ten=count/10;
        one=count%10;
        total=((hundred*hundred*hundred)+(ten*ten*ten)+(one*one*one));
        
         if (i==total)
            {cout<<total<<endl;}
        i++;
        
    } while (i<=500);
    
    return 0;
}
