#include <iostream>

using namespace std;

int main()
{
 int a, b, c;
 a = 0;
 b = 0;
 c = 0;
 cout << "enter your number = ";
 cin >> a;
 c = a%10;
 while ( a != 0 )
 {
    if ( a%10 == a/10%10 || a == c )
        b += a%10;
    a /= 10;
 }
 cout << "hash code of your number " << b;
}
