main: main.cpp
	g++ -o main.o main.cpp
test: test/sum_test.o
	g++ -o test/sum_test.o -C test/sum_test.cpp -Lgoogletest -lgtest -lgtest_main -lpthread
	./test/sum_test.o
