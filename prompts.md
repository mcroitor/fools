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

## LAB02

### Prompt

A doua sarcina este urmatoare:

```markdown
# Crearea și utilizarea claselor. Proiecte complexe. Construirea proiectului

## Scop

După finalizarea acestei sarcini, studentul se va familiariza cu caracteristicile implementării clasei și interacțiunii cu obiectele clasei. Studentul va primi, de asemenea, cunoștințe de bază despre construcție din linia de comandă a proiectelor.

## Sarcina

Sarcina se bazează pe lucrările anterioare de laborator. Efectuarea sarcinii se face în ramura `lab02` a repozitoriului creat anterior.

1. Pentru fiecare structură declarată implementați metode
2. Compilați unul dintre fișierele CPP din linia de comandă, creând un fișier obiect
3. Creați un fișier `cmd` (sau `Makefile`) pentru a construi manual proiectul
4. Creați un fișier `.gitignore` pentru a ignora fișierele obiect și fișierele executabile
5. Modificati fișierul README.md pentru a reflecta metoda de construcție a proiectului
6. Adăugați în repozitoriu GitHub codul sursă modificat și fișierul de construcție în ramura `lab02`

## Prezentare

La lucrare de laborator în Moodle adaugați referința repozitoriu.

## Evaluare

- `2p` - implementarea metodelor pentru structuri
- `4p` - crearea fișierului de construcție
- `1p` - crearea fișierului `.gitignore`
- `1p` - adaugarea in fisier `README.md` modului de construire a proiectului
- `2p` - adăugarea fișierelor `cpp` și fișierului de construcție pe GitHub în ramura `lab02`
- `-1p` - pentru fiecare zi de întârziere
- `-5p` - pentru copierea codului de la colegi
```

Deja am trecut notiunile de [clasa, metode, constructori, obiect](https://github.com/mcroitor/cpp_for_game_designers_ro/blob/main/13_classes.md) si de [proiect / compilare](https://github.com/mcroitor/cpp_for_game_designers_ro/blob/main/31_projects.md)

### Raspuns

Salut! Continuăm cu succes proiectul tău. Dacă în primul laborator ai gândit „scheletul” aplicației (fișierele `.hpp`), acum este momentul să îi dăm „mușchi” (fișierele `.cpp`) și să învățăm cum se construiește un proiect real în C++.

Trecerea de la C la C++ devine foarte evidentă aici. Deoarece ai citit deja materialele despre clase, metode și constructori, știi că în C++ implementarea (ce face funcția) se separă de declarație (cum arată funcția). Pentru a lega o metodă de structura/clasa ei atunci când scrii codul în `.cpp`, vom folosi operatorul de rezoluție a domeniului `::` (de exemplu, `Card::displayCard()`).

Iată pașii exacți pentru a lua nota maximă la Laboratorul 2:

#### Pasul 0: Pregătirea ramurii (Branch-ului)

Înainte de a scrie orice linie de cod, trebuie să lucrăm pe o ramură nouă. Deschide terminalul în folderul proiectului tău (`oop-lab-durak`) și execută:

```bash
git checkout main
git pull
git checkout -b lab02

```

Acum ești pe ramura corectă pentru această sarcină.

---

#### Pasul 1: Implementarea metodelor (Sarcina 1)

Pentru fiecare fișier `.hpp` pe care l-ai creat, trebuie să creăm un fișier `.cpp` corespunzător. Fiindcă în lucrarea 1 am spus că nu ne interesează realizarea detaliată, în implementări vom pune doar mesaje text pentru a demonstra că metodele funcționează.

Vom adăuga și un constructor pentru `Card`, conform materialelor studiate. Dacă nu îl aveai în `Card.hpp`, adaugă-l acum.

**1. `Card.cpp**`

```cpp
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

```

**2. `Renderer.cpp**`

```cpp
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

```

**3. `Listener.cpp**`

```cpp
#include "Listener.hpp"
#include <iostream>

int Listener::getPlayerInput() {
    std::cout << "Asteptam input-ul jucatorului..." << std::endl;
    return 1; // Returnam o valoare falsa momentan
}

bool Listener::checkQuitCommand() {
    return false;
}

```

**4. `GameEngine.cpp**`

```cpp
#include "GameEngine.hpp"
#include <iostream>

void GameEngine::initializeDeck() {
    std::cout << "Motorul de joc: Initializez pachetul de carti..." << std::endl;
    cardsInDeck = 36;
}

void GameEngine::playTurn() {
    std::cout << "Motorul de joc: Incepe o noua tura." << std::endl;
    renderer.clearScreen();
    listener.getPlayerInput();
}

bool GameEngine::isGameOver() {
    return false;
}

```

**5. `main.cpp**` (Pentru a putea compila un proiect, ai nevoie de un punct de intrare)

```cpp
#include "GameEngine.hpp"
#include <iostream>

int main() {
    std::cout << "--- Pornire Durak ---" << std::endl;
    
    GameEngine engine;
    engine.initializeDeck();
    engine.playTurn();
    
    return 0;
}

```

---

#### Pasul 2: Fișierul `.gitignore` (Sarcina 4)

Când compilăm cod C++, se generează fișiere intermediare (obiect: `.o` sau `.obj`) și fișiere executabile (`.exe`). Acestea **NU** trebuie urcate pe GitHub, deoarece ele diferă de la un calculator la altul și ocupă spațiu degeaba.

Creează un fișier numit exact **`.gitignore`** în rădăcina proiectului și adaugă:

```text
# Fisiere obiect
*.o
*.obj

# Fisiere executabile
*.exe
*.out
durak

```

---

#### Pasul 3: Compilarea și construirea proiectului (Sarcinile 2 și 3)

**Compilarea manuală a unui fișier obiect (Sarcina 2):**
În terminal, poți compila doar `Card.cpp` într-un fișier obiect `Card.o` (fără a face executabilul final) folosind flag-ul `-c`:

```bash
g++ -c Card.cpp -o Card.o

```

**Crearea fișierului de construcție (Sarcina 3):**
Ai de ales între un fișier de comenzi (`build.cmd` pentru Windows) sau un `Makefile`. Îți recomand **`Makefile`**, fiindcă este standardul în industrie pentru C/C++. Dacă alegi metoda de Windows, folosește scriptul `.cmd`. Poți adăuga unul dintre ele în proiect:

**Varianta A: `Makefile` (Recomandat)**
Creează un fișier numit exact `Makefile` (fără extensie) și pune următorul conținut. **Atenție: Spațiile din fața lui `g++` trebuie să fie TASTA TAB, nu spații goale!**

```makefile
# Numele executabilului
TARGET = durak

# Compilatorul
CXX = g++

# Fisierele obiect necesare
OBJS = main.o Card.o Renderer.o Listener.o GameEngine.o

# Regula principala de constructie
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Regula pentru a transforma orice .cpp in .o
%.o: %.cpp
	$(CXX) -c $< -o $@

# Curata fisierele generate
clean:
	rm -f *.o $(TARGET) $(TARGET).exe

```

*Pentru a construi proiectul, scrii doar `make` în terminal (sau `mingw32-make` pe Windows).*

**Varianta B: `build.cmd` (Pentru Windows Command Line)**
Dacă preferi un script simplu pe Windows, creează un fișier `build.cmd`:

```cmd
@echo off
echo ===================================
echo 1. Compilam fisierele .cpp in .o...
g++ -c Card.cpp -o Card.o
g++ -c Renderer.cpp -o Renderer.o
g++ -c Listener.cpp -o Listener.o
g++ -c GameEngine.cpp -o GameEngine.o
g++ -c main.cpp -o main.o

echo 2. Legam (Link) fisierele obiect in executabilul durak.exe...
g++ Card.o Renderer.o Listener.o GameEngine.o main.o -o durak.exe

echo Constructie terminata! Ruleaza durak.exe pentru a testa.
echo ===================================

```

---

#### Pasul 4: Modificarea `README.md` (Sarcina 5)

Deschide `README.md` creat la primul laborator și adaugă la final o nouă secțiune:

```markdown
## Cum se construiește (compilează) proiectul

Acest proiect folosește compilatorul `g++`. Pentru a construi proiectul din linia de comandă, aveți la dispoziție următoarele metode:

**Utilizând Makefile:**
Rulați comanda în terminalul din rădăcina proiectului:
`make`
Acest lucru va genera executabilul jocului. Pentru a curăța fișierele generate, rulați `make clean`.

**Utilizând scriptul Windows (build.cmd):**
Rulați în linia de comandă (CMD):
`build.cmd`
Fișierul va compila automat fiecare fișier `.cpp` într-un fișier obiect și le va lega (link) în executabilul `durak.exe`.

```

---

#### Pasul 5: Prezentarea și încărcarea pe GitHub (Sarcina 6)

Acum că totul este gata, trebuie să împingem (push) codul pe ramura nouă. În terminal:

```bash
git add .
git commit -m "Rezolvat Lab02: Implementarea claselor si sistemul de build"
git push -u origin lab02

```

Felicitări! Ai creat clasele, le-ai legat între ele și ai automatizat compilarea. Copiază linkul repozitoriului (sau direct al ramurii `lab02`) și pune-l în Moodle pentru notare. Dacă ai întrebări despre cum funcționează `Makefile` sau constructorii, întreabă-mă!
