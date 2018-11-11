HolaM: HolaF.o FuncionF.h FuncionF.o
	g++ -Wall -Wextra -Werror HolaF.o FuncionF.o -o HolaM.exe
	
HolaF.o: HolaF.cpp FuncionF.h
	g++ -Wall -Wextra -Werror -c HolaF.cpp

FuncionF.o: FuncionF.cpp FuncionF.h
	g++ -Wall -Wextra -Werror -c FuncionF.cpp

.PHONY: clean

clean:
	del *.o

