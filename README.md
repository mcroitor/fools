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
