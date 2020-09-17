all: gcovex gcovex2

gcovex: gcov.cpp
	g++ -fprofile-arcs -ftest-coverage -o gcovex gcov.cpp

gcovex2: gcov2.cpp
	g++ -fprofile-arcs -ftest-coverage -o gcovex2 gcov2.cpp

clean:
	-rm gcovex gcovex2 *.gcno *.gcda *.gcov *.info
	-rm -rf out
