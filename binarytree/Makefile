default: all
BIN=bin
SOURCES=src/test/binary_tree_test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
DEPENDS=$(SOURCES:.cpp=.dep)

EXE=$(BIN)/binary_tree
INCLUDE=-I../3rdparty/cppunit-1.12.1/include
LIBS=../3rdparty/cppunit-1.12.1/src/cppunit/.libs/libcppunit.a
CXXFLAGS=-Wall $(INCLUDE) 

CXX=g++

.PHONY: clean all default

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LIBS) -o $@

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $< -o $@

%.dep: %.cpp
	$(CXX) $(CXXFLAGS) -MM -MT $(<:.cpp=.o) $<  > $@

clean:
	-rm -f $(OBJECTS) $(EXE) $(DEPENDS)
    

-include $(DEPENDS)
