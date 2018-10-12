CC = g++
CFLAGS = -Wall
EX1_NAME = ex1_personne
EX2_NAME = ex2_reservation
INCLUDES =
LIBS =
EX1_OBJ_FILES = ex1_personne.o Personne.o
EX2_OBJ_FILES = ex2_reservation.o Personne.o Client.o Autobus.o Voyage.o Repartiteur.o

all : $(EX1_NAME) $(EX2_NAME)

clean :
  rm $(EX1_NAME) $(EX2_NAME) $(EX1_OBJ_FILES)

$(EX1_NAME) : $(EX1_OBJ_FILES)
  $(CC) -o $(EX1_NAME) $(EX1_OBJ_FILES) $(LIBS)

$(EX2_NAME) : $(EX2_OBJ_FILES)
  $(CC) -o $(EX2_NAME) $(EX2_OBJ_FILES) $(LIBS)

%.o: %.cpp
  $(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.cc
  $(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.c
  gcc $(CFLAGS) $(INCLUDES) -o $@ -c $<





#ex1: ex1_personne.o personne.o
#	g++ -o ex1_personne ex1_personne.o personne.o -v
#	chmod +x ex1_personne
#
#ex1.o: ex1_personne.cpp
#	g++ -o ex1_personne.o -c ex1_personne.cpp -pedantic
#
#personne.o: personne.cpp
#	g++ -o personne.o -c personne.cpp -pedantic
#
#clean:
#	rm -rf *.o
#
#all: ex1 ex2 ex3 ex4
