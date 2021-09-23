#include "contas.hpp"

int main(int argc, char const *argv[])
{
  int ch;
  float cond = 0, iptu = 0, total = 0, luz = 0, net = 30,
        div = 0, Ed = 0, mk = 0, aluguel = 0, desconto = 0;

  cout << setprecision(5);

  for (;;)
  {
    cout << "Digite uma opcao: " << endl;
    cout << "1. Digite o valor do Aluguel " << endl;
    cout << "2. Insere valor Condominio" << endl;
    cout << "3. Insere valor luz" << endl;
    cout << "4. Insere valor desconto" << endl;
    cout << "5. Insere valor IPTU" << endl;
    cout << "6. Mostrar valor total e respectivos precos" << endl;
    cout << "7. Sair" << endl;

    // fflush();
    // cin.ignore(); //limpando buffer

    string ch;
    cin >> ch;

    if (ch == "1")
    {
      cout << "Qual o valor do Aluguel ?" << endl;
      cin >> aluguel;
      system("cls");
    };
    if (ch == "2")
    {
      cout << "Qual o valor do Condominio ?" << endl;
      cin >> cond;
      system("cls");
    };
    if (ch == "3")
    {
      cout << "Qual o valor da energia ?" << endl;
      cin >> luz;
      system("cls");
    };

    if (ch == "4")
    {
      cout << "Desconto !?!?!? Tao ta... quanto de desconto ?" << endl;
      cin >> desconto;
      system("cls");
    };

    if (ch == "5")
    {
      cout << "Eita poha, mais gastos hein.. Diz ai, quanto ?" << endl;
      cin >> iptu;
      system("cls");
    };

    if (ch == "6")
    {
      CalculaValor(aluguel, cond, luz, iptu, net, desconto);
      break;
    };

    if (ch == "7")
    {
      break;
      system("cls"); //linux eh 'clear'
    };
  }
  return 0;
}
