#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <iomanip>

int calcularDelta(int a, int b, int c)
{
  return (b * b) - 4 * a * c;
}

int main()
{

  double a, b, c;
  cin >> a >> b >> c;

  double delta = calcularDelta(a, b, c);

  if (delta < 0)
  {
    return 1;
  }

  double x1 = (-b + sqrt(delta)) / (2 * a);
  double x2 = (-b - sqrt(delta)) / (2 * a);
  cout << fixed << setprecision(3);
  cout << x1 << " " << x2 << endl;
  return 0;
}