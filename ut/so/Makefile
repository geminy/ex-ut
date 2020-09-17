CFLAGS += -fprofile-arcs -ftest-coverage
LFLAGS += -fprofile-arcs -ftest-coverage

test: test.o libhw
	g++ -o $@ test.o -L. -lhw

%.o: %.cpp
	g++ -c $<

libhw: hello.h world.h world.cpp
	g++ -shared -fpic -o libhw.so $^

before_run: libhw_cov
after_run: cov_gcov cov_lcov cov_genhtml

libhw_cov: hello.h world.h world.cpp
	-rm libhw.so
	g++ $(CFLAGS) -shared -fpic -o libhw.so $^

cov_gcov: hello.h world.h world.cpp
	-gcov hello.h
	-gcov world.h
	-gcov world.cpp

cov_lcov:
	lcov -c -d . -o test.info

cov_genhtml:
	genhtml test.info -o out

clean:
	-rm *.o *.so
	-rm *.gcno *.gcda *.info
	-rm test
clean-out:
	-rm -r out
