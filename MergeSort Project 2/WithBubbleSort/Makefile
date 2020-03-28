BIN		:= serial parallel generate BubbleSort serialUnit parallelUnit

CFLAGS		:= -std=c++14 -O3 -m64
LDFLAGS		:= -fopenmp

CXX		:= g++

HEADS		:=  generate_random.hpp
SRC		:=  generate_random.cpp


serial: serial.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ serial.cpp

parallel: parallel.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ parallel.cpp

generate: generate.cpp $(HEADS)
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ $(SRC) generate.cpp

BubbleSort: BubbleSort.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ BubbleSort.cpp

serialUnit: serialUnit.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ serialUnit.cpp

parallelUnit: parallelUnit.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ parallelUnit.cpp

cleanL:
	rm $(BIN) *.o core*

cleanW:
	del $(BIN) *.exe*

cleanO:
	rm *.out*
