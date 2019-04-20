# What is
* Docker sample for C++

# Get start
* Docker build
```
$ docker-compose build
```

* Start up docker container
```
$ docker-compose run --rm app ash
```

# Compile and execute

```
/ # cd app/src/hellowold
/app/src/helloworld # make main
/app/src/helloworld # ./main.o
Hello World!
```

# Test

```
/ # cd app/src/sum
/app/src/sum # make test
g++ -o test/sum_test.o -C test/sum_test.cpp -Lgoogletest -lgtest -lgtest_main -lpthread
./test/sum_test.o
Running main() from /googletest-release-1.8.1/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from example_test
[ RUN      ] example_test.func_sum
[       OK ] example_test.func_sum (0 ms)
[----------] 1 test from example_test (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (0 ms total)
[  PASSED  ] 1 test.
```
