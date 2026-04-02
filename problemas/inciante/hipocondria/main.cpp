#include <bits/stdc++.h>
using namespace std;

int main()
{

  int hora_inicial, minutos_inicial, segundos_inicial;
  cin >> hora_inicial >> minutos_inicial >> segundos_inicial;

  int hora_final, minutos_final, segundos_final;
  cin >> hora_final >> minutos_final >> segundos_final;

  int segudos_totais_inicial = (hora_inicial * 3600) + (minutos_inicial * 60) + segundos_inicial;
  int segudos_totais_final = (hora_final * 3600) + (minutos_final * 60) + segundos_final;

  int diferenca = segudos_totais_final - segudos_totais_inicial;
  cout << diferenca << " segundo(s)";
}