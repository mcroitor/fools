#ifndef CARD_HPP
#define CARD_HPP

struct Card {
    // Atribute (ca in C)
    int suit;  // 0=Inima rosie, 1=Inima neagra, etc.
    int rank;  // 6, 7, 8... 14 (As)

    Card() = default; // Constructor implicit
    Card(int s, int r); // Constructor care initializeaza suit si rank
    // Metode (functii specifice acestei structuri)
    void displayCard(); 
};

#endif
