all: Programa
##name app
ejecutar=ejecutar
extencion=out
#cflasgs
CFLASGS = -g -Wall
#directorios
SRC=src/
LOGICA =$(SRC)Logica/
VISTA=$(SRC)Vista/
#fin directorios
OBJS= Constructor.o MenuPrincipal.o
#para el uso del programa
Programa:main.o $(OBJS)
	g++ -o  $(ejecutar).$(extencion) main.o $(OBJS)
main.o: $(SRC)main.cpp 
	g++ -c $(CFLASGS) $(SRC)main.cpp
#####################################################################
##MenuPrincipal 15
MenuPrincipal.o: $(VISTA)MenuPrincipal.cpp $(VISTA)MenuPrincipal.h 
	g++ -c $(CFLASGS) $(VISTA)MenuPrincipal.cpp
##Constructor 
Constructor.o: $(VISTA)Constructor.cpp $(VISTA)Constructor.h 
	g++ -c $(CFLASGS) $(VISTA)Constructor.cpp
##eliminar todos .o
clean:
	rm -f $(ejecutar).$(extencion)  *.o 