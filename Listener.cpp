#include "Listener.hpp"
#include <iostream>

int Listener::getPlayerInput() {
    std::cout << "Asteptam input-ul jucatorului..." << std::endl;
    return 1; // Returnam o valoare falsa momentan
}

bool Listener::checkQuitCommand() {
    return false;
}