#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "Enter mass of spaceship: ";
    cin >> m;
    cout << "Fuel need to fly is - " << (m/3) - 2 << " l" << endl;
    return 0;
}
