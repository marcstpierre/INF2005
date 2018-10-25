#CC = g++
#CFLAGS = -Wall
#EX1_NAME = ex1_personne
#EX2_NAME = ex2_reservation
#INCLUDES =
#LIBS =
#EX1_OBJ_FILES = ex1_personne.o Personne.o
#EX2_OBJ_FILES = ex2_reservation.o Personne.o Client.o Autobus.o Voyage.o Repartiteur.o
#
#all : $(EX1_NAME) $(EX2_NAME)
#
#clean :
#  rm $(EX1_NAME) $(EX2_NAME) $(EX1_OBJ_FILES)
#
#$(EX1_NAME) : $(EX1_OBJ_FILES)
#  $(CC) -o $(EX1_NAME) $(EX1_OBJ_FILES) $(LIBS)
#
#$(EX2_NAME) : $(EX2_OBJ_FILES)
#  $(CC) -o $(EX2_NAME) $(EX2_OBJ_FILES) $(LIBS)
#
#%.o: %.cpp
#  $(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<
#
#%.o: %.cc
#  $(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<
#
#%.o: %.cpp
#  gcc -stdlib=libstdc++ $(CFLAGS) $(INCLUDES) -o $@ -c $<


ex1: ex1_personne.o personne.o
	g++ -o ex1_personne ex1_personne.o personne.o -v
	chmod +x ex1_personne

ex1.o: ex1_personne.cpp
	g++ -o ex1_personne.o -c ex1_personne.cpp -pedantic

ex2: ex2_reservation.o Personne.o Client.o Autobus.o Voyage.o Repartiteur.o Date.o
	clang++ ex2_reservation.o Personne.o Client.o Autobus.o Voyage.o Repartiteur.o Date.o -o ex2_reservation -v
	chmod +x ex2_reservation

ex2b: ex2_reservation.o Personne.o Client.o Autobus.o Voyage.o Repartiteur.o Date.o
	clang++   ex2_reservation.cpp Personne.cpp Client.cpp Autobus.cpp Voyage.cpp Repartiteur.cpp Date.cpp -o ex2_reservation
	chmod +x ex2_reservation

Client.o: Client.cpp
	clang++ -o Client.o -c Client.cpp -pedantic

Autobus.o: Autobus.cpp
	clang++ -o Autobus.o -c Autobus.cpp -pedantic

Personne.o: Personne.cpp
	clang++ -o Personne.o -c Personne.cpp -pedantic

Voyage.o: Voyage.cpp Date.cpp Autobus.cpp
	clang++  -c Voyage.cpp Date.cpp Autobus.cpp -pedantic -v

Repartiteur.o: Repartiteur.cpp voyage.o
	clang++ -o Repartiteur.o -c Repartiteur.cpp -pedantic -v

Date.o: Date.cpp
	clang++ -o Date.o -c Date.cpp -pedantic

clean:
	rm -rf *.o

all: ex1 ex2 ex3 ex4
