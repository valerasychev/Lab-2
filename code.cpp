#include <iostream>
#include <cmath>
using namespace std;

double z, a;

double z1(double b)
{

z=(sqrt(2*b+2*(sqrt(pow(b , 2)-4))))/((sqrt(pow(b , 2)-4)+b+2));

return z;
}

void main()
{

        z1(6);
        cout << "z=" << z << "\n";
    
}
