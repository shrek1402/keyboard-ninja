CC=g++
CFLAGS=-c
LDFLAGS=
SOURCES=main.cpp FileOpen.cpp LITC.cpp pch.cpp keyboard.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Geometry

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o Geometry
