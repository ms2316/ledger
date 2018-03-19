install: prog

prog: ledger.o dbmanager.o
	gcc-7 -Wall -o prog -ldb ledger.o dbmanager.o

ledger.o: ledger.c ledger.h
	gcc-7 -Wall -c ledger.c

dbmanager.o: dbmanager.c
	gcc-7 -Wall -c dbmanager.c

clean:
	rm prog *.o
