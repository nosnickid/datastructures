default: all
BIN=bin
SOURCES=src/test/binary_tree_test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
DEPENDS=$(SOURCES:.cpp=.dep)

EXE=$(BIN)/binary_tree
INCLUDE=-I../3rdparty/cppunit-1.12.1/include
LIBS=../3rdparty/cppunit-1.12.1/src/cppunit/.libs/libcppunit.a
CXXFLAGS=-Wall $(INCLUDE) $(LIBS)

CXX=g++

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $< -o $@

%.dep: %.cpp
	$(CXX) -M $(CXXFLAGS) $< > $@

clean:
	-rm -f $(OBJECTS) $(EXE) $(DEPENDS)
    

all: $(OBJECTS) $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LIBS) -o $@

-include $(DEPENDS)
