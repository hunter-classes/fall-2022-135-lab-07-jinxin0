CXX = g++ -std=c++20
CXXFLAGS = -Wall

main: main.o unindent.o indent.o
	$(CXX) $(CXXFLAGS) -o main main.o unindent.o indent.o

unindent.o: unindent.cpp unindent.h
	$(CXX) $(CXXFLAGS) -c unindent.cpp

indent.o: indent.cpp indent.h unindent.h
	$(CXX) $(CXXFLAGS) -c indent.cpp

clean:
	rm -f *.o
