@echo off
echo ===================================
echo 1. Compilam fisierele .cpp in .o...
g++ -c Card.cpp -o Card.o || exit /b 1
g++ -c Renderer.cpp -o Renderer.o || exit /b 1
g++ -c Listener.cpp -o Listener.o || exit /b 1
g++ -c GameEngine.cpp -o GameEngine.o || exit /b 1
g++ -c main.cpp -o main.o || exit /b 1

echo 2. Legam (Link) fisierele obiect in executabilul fools.exe...
g++ Card.o Renderer.o Listener.o GameEngine.o main.o -o fools.exe || exit /b 1

echo Constructie terminata! Ruleaza fools.exe pentru a testa.
echo ===================================
