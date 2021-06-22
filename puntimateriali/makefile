compila: main.o funzioni.o
	g++ main.o funzioni.o -o puntimassa
main.o: main.cpp funzioni.h
	g++ main.cpp -c
funzioni.o: funzioni.cpp funzioni.h
	g++ funzioni.cpp -c
clean: rm*.o
