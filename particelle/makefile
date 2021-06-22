compila: main.o funzione.o
	g++ main.o funzione.o -o particelle
main.o: main.cpp funzione.h
	g++ main.cpp -c
funzione.o: funzione.cpp funzione.h
	g++ funzione.cpp -c
clean: rm*.o
