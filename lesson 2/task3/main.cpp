#include <iostream>

using namespace std;

int main()
{
  cout << "Enter size: ";
  int s;
  cin >> s;
  for (int height  = 0; height < s; height++)
  {
    for (int width = 0; width < s; width++)
    {
      if ((height == 0) || (width == 0) || (height == s - 1) || (width == s - 1))
        {
          cout << "*";
        }
        else
        {
         cout << " ";
        }

    }
    cout << endl;
  }
  return 0;
}
