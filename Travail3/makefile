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


ex1: ex1_personne.o Personne.o
	g++ -o ex1_personne ex1_personne.o Personne.o -v
	chmod +x ex1_personne

ex1.o: ex1_personne.cpp
	g++ -o ex1_personne.o -c ex1_personne.cpp -pedantic

ex2: ex2_reservation.o Autobus.o Voyage.o Repartiteur.o Date.o
	g++ ex2_reservation.o Autobus.o Voyage.o Repartiteur.o Date.o -o ex2_reservation -v
	chmod +x ex2_reservation

#ex2b: ex2_reservation.o Personne.o Client.o Autobus.o Voyage.o Repartiteur.o Date.o
#	g++   ex2_reservation.cpp Personne.cpp Client.cpp Autobus.cpp Voyage.cpp Repartiteur.cpp Date.cpp -o ex2_reservation
#	chmod +x ex2_reservation

ex3: ex3_paragraphe.o Mot.o Phrase.o
	g++ ex3_paragraphe.o Mot.o Phrase.o -o ex3_paragraphe -v
	chmod +x ex3_paragraphe

Mot.o: Mot.cpp
	g++ -o Mot.o -c Mot.cpp -pedantic

Phrase.o: Phrase.cpp Mot.cpp
	g++ -o Phrase.o -c Phrase.cpp -pedantic

Client.o: Client.cpp
	g++ -o Client.o -c Client.cpp -pedantic

Autobus.o: Autobus.cpp
	g++ -o Autobus.o -c Autobus.cpp -pedantic

Personne.o: Personne.cpp
	g++ -o Personne.o -c Personne.cpp -pedantic

Voyage.o: Voyage.cpp Date.cpp Autobus.cpp
	g++  -c Voyage.cpp Date.cpp Autobus.cpp -pedantic -v

Repartiteur.o: Repartiteur.cpp voyage.o
	g++ -o Repartiteur.o -c Repartiteur.cpp -pedantic -v

Date.o: Date.cpp
	g++ -o Date.o -c Date.cpp -pedantic

ex4_h: ex4_heritage.o Point.o CarreFromPoint.o CubeFromCarre.o
	g++ ex4_heritage.o Point.o CarreFromPoint.o CubeFromCarre.o -o ex4_heritage -v
	chmod +x ex4_heritage

ex4_heritage.o: ex4_heritage.cpp
	g++ -o ex4_heritage.o -c ex4_heritage.cpp -pedantic

Point.o: Point.cpp
	g++ -o Point.o -c Point.cpp -pedantic

CarreFromPoint.o: CarreFromPoint.cpp
	g++ -o CarreFromPoint.o -c CarreFromPoint.cpp -pedantic

CubeFromCarre.o: CubeFromCarre.cpp
	g++ -o CubeFromCarre.o -c CubeFromCarre.cpp -pedantic

ex4_c: ex4_composition.o Point.o CarreByComposition.o CubeByComposition.o
	g++ ex4_composition.o Point.o CarreByComposition.o CubeByComposition.o -o ex4_composition -v
	chmod +x ex4_composition

CarreByComposition.o: CarreByComposition.cpp
	g++ -o CarreByComposition.o -c CarreByComposition.cpp -pedantic

CubeByComposition.o: CubeByComposition.cpp
	g++ -o CubeByComposition.o -c CubeByComposition.cpp -pedantic

clean:
	rm -rf *.o

all: ex1 ex2 ex3 ex4
