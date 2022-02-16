# Loops and Armstrong Numbers

## Armstrong 1: WHILE Loop
```
#include <iostream>

using namespace std;

int main()
{
    int i=1, one, ten, hundred, count, total;
    
    cout<<"Armstrong Numbers\n";
    cout<<"-----------------\n";
    
    while (i<=500)
    {
        hundred=i/100;
        count=i%100;
        ten=count/10;
        one=count%10;
        total=((hundred*hundred*hundred)+(ten*ten*ten)+(one*one*one));
        
         if (i==total)
            {cout<<total<<endl;}
            
        i++;
    }
   
    
    return 0;
}
```

## Armstrong 2: FOR Loop
```
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
```

## Armstrong 3: DO...WHILE Loop
```
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
```