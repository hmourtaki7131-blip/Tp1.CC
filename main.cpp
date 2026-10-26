
#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int main() {
    BankAccount compte("12345", 1000.0);

    compte.afficher();

    compte.deposer(500.0);

    compte.retirer(200.0);

    compte.afficher();

    cout << "Numero du compte : "
         << compte.getNumero() << endl;

    cout << "Solde final : "
         << compte.getSolde() << " euros" << endl;

    return 0;
}
