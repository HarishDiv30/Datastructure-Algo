/******************************************************************************
Code by Harishchandra_Divase
*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  float n1, n2;
  cout << "Input Two Numbers:-";
  cin >> n1 >> n2;
  char op;
  cout << "Input a operator:-";
  cin >> op;

  switch (op)
    {
    case '+':
      cout << n1 + n2 << endl;
      break;

    case '-':
      cout << n1 - n2 << endl;
      break;

    case '*':
      cout << n1 * n2 << endl;
      break;

    case '/':
      cout << n1 / n2 << endl;

    default:
      cout << "Enter Another Operator" << endl;
      break;
    }
  return 0;
}
