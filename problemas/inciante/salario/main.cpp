#include <bits/stdc++.h>
using namespace std;

int main()
{

  string nome;
  float salario;
  float vendas;
  cin >> nome >> salario >> vendas;

  float adicional_vendas = vendas * 0.15;
  float salario_total = salario + adicional_vendas;

  printf("TOTAL = R$ %.2f ", salario_total);
}