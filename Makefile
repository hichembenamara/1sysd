.PHONY: all clean 

PROGS=Chainlist
CC=gcc
CFLAGS=
LDFLAGS=

all: $(PROGS)

%: .%c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

%.S: %.c 
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.S *.O
	

