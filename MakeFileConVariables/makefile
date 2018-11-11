####################################################################
CC = g++
CFLAGS = -Wall -Wextra -Werror
OBJHOLA = HolaF.cpp FuncionF.h
OBJFUNC = FuncionF.cpp FuncionF.h
OBJMAIN = HolaF.o FuncionF.h FuncionF.o
####################################################################

HolaM: $(OBJMAIN)
	$(CC) $(CFLAGS) HolaF.o FuncionF.o -o HolaM.exe
	
HolaF.o: $(OBJHOLA)
	$(CC) $(CFLAGS) -c HolaF.cpp

FuncionF.o: $(OBJFUNC)
	$(CC) $(CFLAGS) -c FuncionF.cpp

.PHONY: clean

clean:
	del *.o

