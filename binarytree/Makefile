default: all
BIN=bin
SOURCES=src/main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
DEPENDS=$(SOURCES:.cpp=.dep)

EXE=$(BIN)/binary_tree

INCLUDE=
LIBS=

CXXFLAGS=$(INCLUDE) $(LIBS)

CXX=g++

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $< -o $@

%.dep: %.cpp
	$(CXX) -M $(CXXFLAGS) $< > $@

clean:
	-rm -f $(OBJECTS) $(EXE) $(DEPENDS)
    

all: $(OBJECTS) $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(LIBS) $(OBJECTS) -o $@

-include $(DEPENDS)
