#include "contas.hpp"

void CalculaValor(float aluguel, float cond, float luz, float iptu, float net, float desconto)
{
  cout << setprecision(5);
  //Condominio, Luz, Internet e AP
  float total = cond + luz + iptu + net - desconto;
  float div = total / 3;
  float Ed = div + (aluguel * 0.3884);
  float mk = div + (aluguel * 0.3058);
  cout << "=======================" << endl;
  // system("pause");
  cout << "Aluguel: " << aluguel << endl;
  cout << "Condominio: " << cond << endl;
  cout << "Energia: " << luz << endl;
  cout << "IPTU: " << iptu << endl;
  cout << "Desconto: " << desconto << endl;
  cout << "Net: " << net << endl;
  cout << "Divisao (sem os precos dos quartos): " << div << endl;
  cout << "=======================" << endl;
  cout << "Total: " << total + aluguel << endl;

  cout << "Ed: " << Ed << endl;
  cout << "Kelvin e Chele: " << mk << endl;
}
