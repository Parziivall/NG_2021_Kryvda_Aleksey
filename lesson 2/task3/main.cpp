#include <iostream>

using namespace std;

int main()

{
int a,b;
cout<<"Vvedite visotu: ";
cin>>a;
cout<<"Vvedite IIIupuHy: ";
cin>>b;

for (int i = 1; i <= a; i++)
{
    if (i == 1 || i == a)
    for(int c = 1; c <= b; c++) cout << "*";
    else
    {
        cout << "*";
        for (int c = 1; c <=(b-2); c++) cout << " ";
        cout << "*";

    }

    cout << "\n";

}

}
