#include <bits/stdc++.h>
using namespace std;

int main()
{
   double arr[2][3];

   for (int i = 0; i < 2; ++i)
   {
      for (int j = 0; j < 3; ++j)
      {
         cin>>arr[i][j];
      }
   }

   double det = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
   double detB = arr[0][2] * arr[1][1] - arr[0][1] * arr[1][2];
   double detA = arr[0][0] * arr[1][2] - arr[0][2] * arr[1][0];

   double b = detB / det;
   double a = detA / det;

   cout << fixed << setprecision(4) << b << endl;
   cout << fixed << setprecision(4) << a;

   return 0;
}