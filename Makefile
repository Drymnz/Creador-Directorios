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
PETITIONES=$(LOGICA)Petitions/
#fin directorios
OBJS= Constructor.o MenuPrincipal.o Petitions.o
#para el uso del programa
Programa:main.o $(OBJS)
	g++ -o  $(ejecutar).$(extencion) main.o $(OBJS)
main.o: $(SRC)main.cpp 
	g++ -c $(CFLASGS) $(SRC)main.cpp
#####################################################################
##MenuPrincipal
MenuPrincipal.o: $(VISTA)MenuPrincipal.cpp $(VISTA)MenuPrincipal.h 
	g++ -c $(CFLASGS) $(VISTA)MenuPrincipal.cpp
##Constructor 
Constructor.o: $(VISTA)Constructor.cpp $(VISTA)Constructor.h 
	g++ -c $(CFLASGS) $(VISTA)Constructor.cpp
##Petitions 
Petitions.o: $(PETITIONES)Petitions.cpp $(PETITIONES)Petitions.h 
	g++ -c $(CFLASGS) $(PETITIONES)Petitions.cpp
##eliminar todos .o
clean:
	rm -f $(ejecutar).$(extencion)  *.o 