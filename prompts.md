# Prompts

## LAB01

### Prompt

Tu esti profesor de programare C++. Eu am urmatoare sarcina la prima lucrare de laborator:

```markdown
# Crearea unui proiect. Lucrul cu GIT

## Scop

După executarea acestei lucrării de laborator student va face cunoștința cu sistem de control codului sursă GIT și va primi cunoștințe de bază necesare pentru organizarea proiectului.

## Sarcina

1. Selectați pentru realizarea o joacă din specificate:
   1. joc de cărți "Durak"
   2. tic-tac-toe (X și O)
   3. Snake
   4. Minesweeper
   5. Pacman
   6. Dame
   7. Story Tale (text adventure)
   8. Visual Novel
   9. Rogue-like
   10. etc.
2. Înregistrați-vă pe [GitHub](https://github.com/).
3. Creați un repozitoriu nou.
4. Clonați repozitoriu pe calculator personal
5. Adăugați în repozitoriu fișier README.md cu descrierea proiectului
   1. Denumirea proiectului
   2. Descrierea proiectului / reguli de joc
   3. Structuri de date si descrierea lor
6. Creați fișiere `hpp` cu definirea structurilor de bază necesitate pentru proiect. Fisiere obligatorii:
   1. motor de joaca (de exemplu, `GameEngine.hpp` sau `Engine.hpp`)
   2. desenator (de exemplu `Painter.hpp`, `Presenter.hpp` sau `Renderer.hpp`)
   3. ascultator (de exemplu `Listener.hpp`)
7. Plasați cod pe __GitHub__

> În caz, dacă se utilizează LLM (Large Language Model) pentru obținerea rezultatului, proiectul trebuie să includă și mențiunea corespunzătoare în README.md, și fișierul `prompts.md`, care conține prompturile utilizate și răspunsurile generate.

## Prezentare

La lucrare de laborator în Moodle adaugați referința repozitoriu.

## Evaluare

- `1p` - crearea contului pe GitHub
- `1p` - crearea proiectului
- `2p` - crearea fișierelor cu structurile necesare
- `2p` - adăugarea descrierii proiectului
- `1p` - publicarea codului pe GitHub in ramura `lab01`
- `3p` - apararea proiectului
- `-1p` - pentru fiecare zi de întârziere
- `-5p` - pentru copierea codului de la colegi
```

eu am ales sa fac joaca de carti Durak. Explica-ma ce si cum eu trebuie sa fac. Ai in vedere, ca

- eu nu cunosc nimic de C++, numai C, inseamna ca nu pot utiliza in prima lucrare elemente de C++.
- Totodata profesor mi-a spus ca structuri si clase sunt asemanatoare si eu pot declara in structuri / clase metode.
- in prima lucrare se face accent la proiectare, realizarea nu se cere.
- fiecare structura / clasa definita in fisier HPP separat

### Raspuns

Salut! Foarte bună alegere. „Durak” (Prostul) este un joc clasic, excelent pentru a învăța logica de programare, deoarece are reguli clare, dar o stare a jocului destul de complexă (pachet de cărți, atu, jucători care atacă și se apără).

Ca profesorul tău, te voi ghida pas cu pas, ținând cont că abia faci trecerea de la C la C++ și că acum ne interesează **doar proiectarea (arhitectura)**, nu și scrierea codului care face jocul să funcționeze.

Faptul că știi C este un avantaj. În C, o `struct` conține doar variabile (date). În C++, o `struct` poate conține și **funcții** (numite metode), care acționează asupra acelor date. La acest laborator, vom scrie doar *declarațiile* acestor structuri și metode în fișiere `.hpp` (header), exact așa cum făceai cu fișierele `.h` în C.

Iată cum trebuie să abordezi lucrarea, pas cu pas:

#### Pasul 1: Pregătirea GIT și a mediului (Sarcina 2, 3, 4 și Regula de evaluare)

1. Fă-ți cont pe [GitHub](https://github.com/) dacă nu ai deja.
2. CreeazăSalutare! Mă bucur că ai ales jocul „Durak”. Este o alegere excelentă pentru a învăța programarea orientată pe obiecte, deoarece elementele jocului (cărțile, jucătorii, pachetul) pot fi ușor modelate.

Faptul că știi limbajul C este un avantaj imens. În C++, o `struct` (sau o `class`) este practic o structură din C, dar care, pe lângă variabile, poate conține și **funcții** (numite *metode*). Deoarece la prima lucrare se cere doar proiectarea (fără scrierea codului de execuție), noi vom crea doar fișierele de antet (`.hpp`), care vor conține definițiile acestor structuri.

Iată ghidul pas cu pas pentru a realiza această lucrare de laborator și a obține nota maximă:

#### Pasul 1: Pregătirea mediului și a Git-ului

1. Crează-ți un cont pe [GitHub](https://github.com/) (dacă nu ai deja).
2. Crează un **Repository (repozitoriu) nou** (apasă butonul *New* pe GitHub). Numește-l, de exemplu, `oop-lab-durak`. Bifează opțiunea "Add a README file" pentru a-ți ușura munca.
3. Deschide terminalul (sau Git Bash) pe calculatorul tău și **clonează** repozitoriul:
```bash
git clone link_ul_repozitoriului_tau
cd oop-lab-durak

```

4. **MOMENT CRITIC pentru evaluare:** Crează și mută-te pe ramura `lab01` (profesorul a alocat 1 punct special pentru asta):
```bash
git checkout -b lab01

```

#### Pasul 2: Crearea fișierelor de documentație (README.md și prompts.md)

Deoarece folosești un LLM (pe mine) pentru a te ajuta, trebuie să fim transparenți, conform cerințelor.

1. Crează un fișier numit **`prompts.md`**. Aici va trebui să copiezi exact întrebarea pe care mi-ai pus-o mai devreme și răspunsul pe care ți-l dau acum.
2. Modifică fișierul **`README.md`** cu următorul conținut (îl poți adapta):

```markdown
# Joc de cărți: Durak (Proiect C++)

## Descrierea proiectului și regulile de joc
Durak este un joc clasic de cărți. Scopul jocului este de a scăpa de toate cărțile din mână. Ultimul jucător care rămâne cu cărți este declarat "Durak" (prostul).
- Se joacă cu un pachet de 36 de cărți.
- Fiecare jucător primește 6 cărți.
- O carte este extrasă pentru a stabili suita de atu (trump).
- Jucătorii atacă și se apără în funcție de valoarea cărților și a atuului.

## Structuri de date
Deoarece codul este scris în C++, am grupat datele și funcțiile asociate lor în structuri:
- **Card**: Reprezintă o carte individuală (culoare/suită și valoare).
- **GameEngine**: Motorul principal care gestionează logica jocului, rândul jucătorilor și starea pachetului.
- **Renderer**: Se ocupă de desenarea interfeței (chiar dacă în consolă) pentru a arăta cărțile de pe masă și din mână.
- **Listener**: Preia comenzile de la tastatură ale jucătorului (ce carte dorește să joace).

*Notă: Acest proiect a fost realizat cu asistența unui LLM. Detaliile interacțiunii se află în fișierul `prompts.md`.*

```

#### Pasul 3: Proiectarea structurilor în C++ (Fișierele .hpp)

Deoarece ești obișnuit cu C, vom folosi `struct`, dar vom adăuga "metode" (funcții) în interiorul lor, exact cum a sugerat profesorul. Fiecare structură va sta în fișierul ei. Vom folosi include guards (`#ifndef`, `#define`, `#endif`) cu care probabil ești familiarizat din C.

Crează următoarele fișiere în folderul proiectului tău:

**1. `Card.hpp**` (Structura de bază pentru o carte)

```cpp
#ifndef CARD_HPP
#define CARD_HPP

struct Card {
    // Atribute (ca in C)
    int suit;  // 0=Inima rosie, 1=Inima neagra, etc.
    int rank;  // 6, 7, 8... 14 (As)

    // Metode (functii specifice acestei structuri)
    void displayCard(); 
};

#endif

```

**2. `Renderer.hpp**` (Desenatorul obligatoriu)

```cpp
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

```

**3. `Listener.hpp**` (Ascultătorul obligatoriu)

```cpp
#ifndef LISTENER_HPP
#define LISTENER_HPP

struct Listener {
    // Asteapta ca jucatorul sa apese o tasta
    int getPlayerInput();
    
    // Verifica daca jucatorul vrea sa iasa din joc
    bool checkQuitCommand();
};

#endif

```

**4. `GameEngine.hpp**` (Motorul de joc obligatoriu)

```cpp
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

```

#### Pasul 4: Salvarea și publicarea pe GitHub

Acum că ai creat toate fișierele (`README.md`, `prompts.md`, `Card.hpp`, `Renderer.hpp`, `Listener.hpp`, `GameEngine.hpp`), trebuie să le trimiți pe GitHub în ramura `lab01`.

În terminal, rulează următoarele comenzi:

```bash
# Adaugă toate fișierele noi în "coșul" Git
git add .

# Salvează modificările cu un mesaj descriptiv
git commit -m "Realizat designul structurilor pentru Lab 1 - Durak"

# Trimite codul pe GitHub în ramura lab01
git push -u origin lab01

```

#### Prezentarea

Intră pe pagina ta de GitHub, navighează la repository-ul creat și copiază link-ul din bara de sus a browserului. Mergi pe Moodle și lipește acest link la sarcina pentru Laboratorul 1.

Dacă ai întrebări despre cum funcționează `struct`-urile cu funcții în ele (față de cum le făceai în C), spune-mi și îți explic în detaliu! Baftă la predare!

---
