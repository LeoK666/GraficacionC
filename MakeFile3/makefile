################################################
#wildcard sirve para seleccionar todos los archivos, en este caso .cpp
SOURCES = $(wildcard *.cpp)
#Convertimos los archivos cpp en .o
OBJECTS = $(SOURCES:%.cpp=%.o)
TARGET = holaf.exe
CFLAGS = -Wall -Wextra -Werror
##################################################

.PHONY: all
all: $(TARGET)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(LINK.cpp) $^ - o $@

.PHONY: clean
clean:
	del *.o