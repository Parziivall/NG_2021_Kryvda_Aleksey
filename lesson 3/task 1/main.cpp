#include <iostream>

using namespace std;

int main()
{
    int arr[10];

    for (int i=0; i<10; i++)
    {
        cout << "Enter " << i+1 << " element: " << endl;
        cin >> arr[i];
    }

    int num=0;

    cout << "Enter your number: " << endl;
    cin >> num;

    for (int i=0; i<10; i++)
    {
        arr[i]+=num;
        cout << arr[i] << " ";
    }


}
