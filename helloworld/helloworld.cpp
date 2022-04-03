#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   int n=5;
   vector<int>v(n,0);
   for(int i=0;i<n;i++){
      v[i]=i;
   }
   for(int i=0;i<n;i++){
      cout<<v[i]<<endl;
   }
}

