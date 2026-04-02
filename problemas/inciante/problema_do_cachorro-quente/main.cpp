#include <bits/stdc++.h>
using namespace std;

int main()
{
  double H, P;
  if (!(cin >> H >> P))
    return 0;

  double media = H / P;

  cout << fixed << setprecision(2);
  cout << media << endl;

  return 0;
}