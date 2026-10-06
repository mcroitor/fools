#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "Card.hpp"

struct Renderer {
    // Curata ecranul
    void clearScreen();
    
    // Deseneaza cartile din mana jucatorului
    void drawHand(Card hand[], int cardCount);
    
    // Deseneaza cartile de pe masa (atac si aparare)
    void drawTable(Card tableCards[], int count);
};

#endif
