
#include "BankAccount.hpp"

BankAccount::BankAccount()
    : m_numero("N/A"), m_solde(0.0) {
}

BankAccount::BankAccount(const std::string& numero, double soldeInitial)
    : m_numero(numero), m_solde(soldeInitial) {
}

void BankAccount::deposer(double montant) {
    if (montant <= 0) {
        std::cerr << "[Erreur] Le montant doit etre positif.\n";
        return;
    }

    m_solde += montant;
    std::cout << "Depot effectue. Nouveau solde : "
              << m_solde << " euros\n";
}

bool BankAccount::retirer(double montant) {
    if (montant <= 0) {
        std::cerr << "[Erreur] Le montant doit etre positif.\n";
        return false;
    }

    if (montant > m_solde) {
        std::cerr << "[Erreur] Fonds insuffisants.\n";
        return false;
    }

    m_solde -= montant;
    std::cout << "Retrait effectue. Nouveau solde : "
              << m_solde << " euros\n";
    return true;
}

void BankAccount::afficher() const {
    std::cout << "Compte numero : " << m_numero
              << " | Solde : " << m_solde
              << " euros\n";
}

std::string BankAccount::getNumero() const {
    return m_numero;
}

double BankAccount::getSolde() const {
    return m_solde;
}
