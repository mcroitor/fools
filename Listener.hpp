#ifndef LISTENER_HPP
#define LISTENER_HPP

struct Listener {
    // Asteapta ca jucatorul sa apese o tasta
    int getPlayerInput();
    
    // Verifica daca jucatorul vrea sa iasa din joc
    bool checkQuitCommand();
};

#endif
