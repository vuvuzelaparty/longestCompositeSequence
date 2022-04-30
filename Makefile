cc = gcc
EXE = longCompSeq

.PHONY : build bash c clean

build : longCompSeq.bash longCompSeq.c
	$(cc) longCompSeq.c -o $(EXE) -lm
	chmod +x longCompSeq.bash

bash : longCompSeq.bash
	chmod +x longCompSeq.bash

c : longCompSeq.c
	$(cc) longCompSeq.c -o $(EXE) -lm

clean :
	@rm -f $(EXE)
	@chmod -x longCompSeq.bash
