# Finding the Volume of a Sphere

```
#include <iostream>  
using namespace std;

const double PI = 3.14159265; //Set PI as constant 

int main () {
    double radius, volume; //Set variables radius and volume as double.
    cout << "Enter the radius of a sphere: ";  //Asking for radius of sphere input
    cin >> radius;  //Input radius of sphere
    volume = 4.0/3.0 * PI * radius * radius * radius; //Equation to find the volume
    cout << "The spheres volume is: " << volume << endl; //Outputting volune
    return 0; // Fin
}
```
