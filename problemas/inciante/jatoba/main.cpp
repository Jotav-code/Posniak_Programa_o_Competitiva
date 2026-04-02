#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H;
  cin >> H;

  if (H > 1000)
  {
    cout << "H tem que ser menor que 1000";
    return 1;
  }
  int total = H * 300;

  cout << total;
}