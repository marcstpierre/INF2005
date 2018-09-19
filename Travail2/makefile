ex1: ex1_add_matrices.o
	g++ -o ex1_add_matrices ex1_add_matrices.o -v
	chmod +x ex1_add_matrices

ex1.o: ex1_add_matrices.cpp
	g++ -o ex1_add_matrices.o -c ex1_add_matrices.cpp -pedantic

ex2: ex2_tri_tableau.o 
	g++ -o ex2_tri_tableau ex2_tri_tableau.o -v
	chmod +x ex2_tri_tableau

ex2.o: ex2_tri_tableau.cpp
	g++ -o ex2_tri_tableau.o -c ex2_tri_tableau.cpp -pedantic

ex3: ex3_trouve_caract.o
	g++ -o ex3_trouve_caract ex3_trouve_caract.o -v
	chmod +x ex3_trouve_caract

ex3.o: ex3_trouve_caract.cpp
	g++ -o ex3_trouve_caract.o -c ex3_trouve_caract.cpp -pedantic

ex4: ex4_expon.o
	g++ -o ex4_expon ex4_expon.o -v
	chmod +x ex4_expon

ex4.o: ex4_expon.cpp
	g++ -o ex4_expon.o -c ex4_expon.cpp -pedantic

clean:
	rm -rf *.o

all: ex1 ex2 ex3 ex4
