# CHAPITRE 1 : BUT FINAL

but : game

# CHAPITRE 2 : VARIABLES

OFILES = hue.o \
		carre.o

CC = gcc

CFLAGS = -Wall -ansi -pedantic

# CHAPITRE 3 : DEPENDANCES (REGLES IMPLICITES)

hue.o : hue.h

carre.o : hue.h


# CHAPITRE 4 : DEPENDANCES AVEC COMMANDES

game : $(OFILES)
	$(CC) $(CFLAGS) -o game $(OFILES)

# CHAPITRE 5 : NETTOYAGE DES FICHIERS GENERES

clean :
	-rm -f $(OFILES) game

# CHAPITRE 6 : BUTS FACTICES

.PHONY : but clean

run :
	./game
