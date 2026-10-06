@echo off
echo ===================================
echo 1. Compilam fisierele .cpp in .o...
g++ -c Card.cpp -o Card.o
g++ -c Renderer.cpp -o Renderer.o
g++ -c Listener.cpp -o Listener.o
g++ -c GameEngine.cpp -o GameEngine.o
g++ -c main.cpp -o main.o

echo 2. Legam (Link) fisierele obiect in executabilul fools.exe...
g++ Card.o Renderer.o Listener.o GameEngine.o main.o -o fools.exe

echo Constructie terminata! Ruleaza fools.exe pentru a testa.
echo ===================================
