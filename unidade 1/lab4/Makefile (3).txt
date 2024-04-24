main: main.o cubo.o esfera.o paralelepipedo.o
	g++ -o main main.o cubo.o esfera.o paralelepipedo.o

main.o: main.cpp
	g++ -c main.cpp

cubo.o: cubo.cpp cubo.h
	g++ -c cubo.cpp

esfera.o: esfera.cpp esfera.h
	g++ -c esfera.cpp

paralelepipedo.o: paralelepipedo.cpp paralelepipedo.h
	g++ -c paralelepipedo.cpp

clean:
	rm -f main *.o
