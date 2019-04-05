CC=g++
CFLAGS=-c
LDFLAGS=
SOURCES=keyboard/pch.cpp keyboard/FileOpen.cpp keyboard/LITC.cpp keyboard/pch.cpp keyboard/keyboard.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Geometry

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(CFLAGS) $(OBJECTS) -o -Os -std=c++14 $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o  $@

clean:
	rm -rf *.o Geometry
