cc = gcc
EXE = longCompSeq

.PHONY : build bash c clean

build : longCompSeq.bash longCompSeq.c
	$(cc) $(EXE).c -o $(EXE) -lm
	chmod +x $(EXE).bash

bash : longCompSeq.bash
	chmod +x $(EXE).bash

c : longCompSeq.c
	$(cc) $(EXE).c -o $(EXE) -lm

clean :
	@rm -f $(EXE)
	@chmod -x $(EXE).bash
