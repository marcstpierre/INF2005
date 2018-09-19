ex1: ex1_cnd2euro.o
	g++ -o ex1_cnd2euro ex1_cnd2euro.o -v
	chmod +x ex1_cnd2euro

ex1.o: ex1_cnd2euro.cpp
	g++ -o ex1_cnd2euro.o -c ex1_cnd2euro.cpp -pedantic

ex2: ex2_tablemulti.o
	g++ -o ex2_tablemulti ex2_tablemulti.o -v
	chmod +x ex2_tablemulti

ex2.o: ex2_tablemulti.cpp
	g++ -o ex2_tablemulti.o -c ex2_tablemulti.cpp -pedantic

ex3: ex3_carres.o
	g++ -o ex3_carres ex3_carres.o -v
	chmod +x ex3_carres

ex3.o: ex3_carres.cpp
	g++ -o ex3_carres.o -c ex3_carres.cpp -pedantic

ex4: ex4_pertesfumeur.o
	g++ -o ex4_pertesfumeur ex4_pertesfumeur.o -v
	chmod +x ex4_pertesfumeur

ex4.o: ex4_pertesfumeur.cpp
	g++ -o ex4_pertesfumeur.o -c ex4_pertesfumeur.cpp -pedantic

clean:
	rm -rf *.o

all: ex1 ex2 ex3 ex4
