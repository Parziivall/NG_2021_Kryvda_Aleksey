#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int res = 0;
    cout << "Enter your number: ";
    cin >> num;
    for(int i=num; i>0; i/=10){
	    res +=i%10;
	}
    cout << "The sum of all numbers is: " << res << endl;
    return 0;
}
