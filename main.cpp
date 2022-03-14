#include <iostream>

using namespace std;

int main()
{
    int a, b, max;
   cout << "Enter A and B: ";
   cin>> a >> b;
   max = 1;
   if (b > a)
    max = b;
cout << "A + B = " << a + b << '\n'<< "A - B = "<<a - b<< '\n' << "A * B = " << a * b << '\n' << "A / B = "<<a / b << '\n' << "max = "<< max << '\n';
}
