#include "Renderer.hpp"
#include <iostream>

void Renderer::clearScreen() {
    std::cout << "--- Ecran curatat ---" << std::endl;
}

void Renderer::drawHand(Card hand[], int cardCount) {
    std::cout << "Se deseneaza mana jucatorului (" << cardCount << " carti)." << std::endl;
}

void Renderer::drawTable(Card tableCards[], int count) {
    std::cout << "Se deseneaza masa de joc." << std::endl;
}