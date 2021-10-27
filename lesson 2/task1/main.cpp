#include <iostream>

using namespace std;

int main()
{
    int n = 0;
	int r = 0;
    cout << "Enter your number: ";
    cin >> n;
    for(int i=n; i>0; i/=10)
	{
			r +=i%10;
	}
    cout << "The sum of all numbers is: " << r << endl;
    return 0;
}
