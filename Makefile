CXX = g++ -std=c++20
CXXFLAGS = -Wall

main: main.o unindent.o
	$(CXX) $(CXXFLAGS) -o main main.o unindent.o

unindent.o: unindent.cpp unindent.h
	$(CXX) $(CXXFLAGS) -c unindent.cpp

clean:
	rm -f *.o
