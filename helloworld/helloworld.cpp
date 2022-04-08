#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> v(n, 0);
   for (int i = 0; i < n + 1; i++)
   {
      v[i] = i;
   }
   for (int i = 0; i < n + 1; i++)
   {
      cout << v[i] << endl;
   }
   cout << "hhh" << endl;
}
