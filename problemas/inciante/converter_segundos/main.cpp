#include <bits/stdc++.h>
using namespace std;

int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);

  int segundos = 8456;
  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;
  int segundos_totais = segundos % 60;

  cout << "Horas: " << horas << " Minutos: " << minutos << " Segundos " << segundos_totais << endl;

  int x;
  do
  {
    cout << "Digite um numero e ele vai ter resto no intervalo de 10: ";
    cin >> x;
    int numero = x % 11;
    cout << "Seu numero: " << numero << endl;

  } while (x != -1);

  vector<int> t;

  t.push_back(20);

  for (int j : t)
  {
    cout << j << " ";
  }
}