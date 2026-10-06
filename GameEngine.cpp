#include "GameEngine.hpp"
#include <iostream>

void GameEngine::initializeDeck() {
    std::cout << "Motorul de joc: Initializez pachetul de carti..." << std::endl;
    cardsInDeck = 36;
}

void GameEngine::shuffleDeck() {
    std::cout << "Motorul de joc: Amestec pachetul de carti..." << std::endl;
}

void GameEngine::dealCards() {
    std::cout << "Motorul de joc: Impart cartile..." << std::endl;
}

void GameEngine::playTurn() {
    std::cout << "Motorul de joc: Incepe o noua tura." << std::endl;
    renderer.clearScreen();
    listener.getPlayerInput();
}

bool GameEngine::isGameOver() {
    return false;
}
