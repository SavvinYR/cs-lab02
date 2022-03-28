#include <iostream>

using namespace std;

int main()
{


    double a, b, max, min;
   cout << "Enter A and B: ";
   cin>> a >> b;
   max = a;
   min = a;
   if (a > b)
    min = b;
   if (b > a)
    max = b;
cout << "A + B = " << a + b << '\n'<< "A - B = "<<a - b<< '\n' << "A * B = " << a * b << '\n' << "A / B = "<<a / b << '\n' << "max = "<< max << '\n' << "min =" << min<< '\n';

}
