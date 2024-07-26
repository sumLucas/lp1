CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJS = main.o Quadrado.o Retangulo.o Triangulo.o Circulo.o

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o main $(OBJS)

main.o: main.cpp Quadrado.h Retangulo.h Triangulo.h Circulo.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Quadrado.o: Quadrado.cpp Quadrado.h Forma.h Vetor2D.h
	$(CXX) $(CXXFLAGS) -c Quadrado.cpp

Retangulo.o: Retangulo.cpp Retangulo.h Forma.h Vetor2D.h
	$(CXX) $(CXXFLAGS) -c Retangulo.cpp

Triangulo.o: Triangulo.cpp Triangulo.h Forma.h Vetor2D.h
	$(CXX) $(CXXFLAGS) -c Triangulo.cpp

Circulo.o: Circulo.cpp Circulo.h Forma.h Vetor2D.h
	$(CXX) $(CXXFLAGS) -c Circulo.cpp

clean:
	rm -f *.o main
