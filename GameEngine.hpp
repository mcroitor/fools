#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "Card.hpp"
#include "Renderer.hpp"
#include "Listener.hpp"

struct GameEngine {
    // Atribute
    Card deck[36];
    int cardsInDeck;
    int trumpSuit;
    
    // Modulele necesare (compozitie)
    Renderer renderer;
    Listener listener;

    // Metodele care dicteaza regulile si fluxul jocului
    void initializeDeck();
    void shuffleDeck();
    void dealCards();
    void playTurn();
    bool isGameOver();
};

#endif
