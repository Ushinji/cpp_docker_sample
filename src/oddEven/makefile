FILE_NAME := oddEvenTest

test: test/$(FILE_NAME).cpp
	g++ -o test/$(FILE_NAME).o -C test/$(FILE_NAME).cpp -Lgoogletest -lgtest -lgtest_main -lpthread
	./test/$(FILE_NAME).o
