.PHONY: all clean

# Compléter la ligne ci-dessous avec les noms des
# programme à compiler 
PROGS= circle factorial invertcase
CC=gcc
CFLAGS=
LDFLAGS=-lm

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s *.o
