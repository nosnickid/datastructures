default: all
BIN=bin
SOURCES=src/binary_tree.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXE=$(BIN)/binary_tree

INCLUDE=
LIBS=

CXXFLAGS=$(INCLUDE) $(LIBS)

CXX=g++

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $< -o $@

all: $(OBJECTS) $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(LIBS) $(OBJECTS) -o $@

