IDIR=.
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
#LDIR=../lib

#LIBS=lm

_DEPS=gcd.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=gcd.o main_gcd.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
gcd:$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.O * ~ CORE $(INCDIR)/*~
