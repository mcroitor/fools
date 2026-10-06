#include "GameEngine.hpp"
#include <iostream>

int main() {
    std::cout << "--- Pornire Durak ---" << std::endl;
    
    GameEngine engine;
    engine.initializeDeck();
    engine.playTurn();
    
    return 0;
}
