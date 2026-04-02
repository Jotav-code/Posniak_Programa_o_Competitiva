#include <bits/stdc++.h>
using namespace std;

int main()
{
  int comprimento_da_estrada, distancia_do_pedagio;
  cin >> comprimento_da_estrada >> distancia_do_pedagio;
  int custo_por_KM, valor_do_pedagio;
  cin >> custo_por_KM >> valor_do_pedagio;

  int qtd_de_pedagio = comprimento_da_estrada / distancia_do_pedagio;
  int total_pedagio = qtd_de_pedagio * valor_do_pedagio;
  int custo_total_de_combustivel = custo_por_KM * comprimento_da_estrada;
  int custo_total = total_pedagio + custo_total_de_combustivel;

  cout << custo_total;
}