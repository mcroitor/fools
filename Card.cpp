#include "Card.hpp"
#include <iostream> // Echivalentul lui <stdio.h> din C, folosit pentru afisare

// Constructorul: initializeaza datele
Card::Card(int s, int r) {
    suit = s;
    rank = r;
}

// Implementarea metodei din structura
void Card::displayCard() {
    std::cout << "[Carte] Suita: " << suit << ", Valoare: " << rank << std::endl;
}
