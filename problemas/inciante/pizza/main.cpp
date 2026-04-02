#include<bits/stdc++.h>
using namespace std;


int main(){
  int pizzas_grandes;
  cin >> pizzas_grandes;
  int pizzas_pequenas;
  cin>> pizzas_pequenas;

  int total_de_convidados = ((pizzas_grandes * 8) + (pizzas_pequenas * 4)) -2;

  cout << total_de_convidados;
}