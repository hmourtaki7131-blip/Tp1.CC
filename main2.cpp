
#include <iostream>
#include "Library.hpp"

int main() {
    Library bibliotheque;

    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery", "ISBN001", 1943);
    Book livre2("L'Etranger", "Albert Camus", "ISBN002", 1942);

    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);

    bibliotheque.listerLivres();

    const Book* resultat = bibliotheque.trouverParISBN("ISBN001");

    if (resultat != nullptr) {
        std::cout << "\nLivre trouve :\n";
        resultat->afficher();
    } else {
        std::cout << "Livre introuvable.\n";
    }

    return 0;
}
