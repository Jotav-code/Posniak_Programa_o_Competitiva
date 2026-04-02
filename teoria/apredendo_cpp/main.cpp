#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Otimização de velocidade
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n; // Quantos números ler

  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  cout << "Números ordenados:" << endl;
  for (int x : nums)
  { // Esse é o "for each" do C++
    cout << x << " ";
  }

  return 0;
}