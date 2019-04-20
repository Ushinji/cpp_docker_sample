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
/ # ls
app    bin    dev    etc    home   lib    media  mnt    opt    proc   root   run    sbin   srv    sys    tmp    usr    var
```

* Compile and execute C++ files.

```
/ # cd app/hellowold
/app/helloworld # g++ -o main.out main.cpp 
/app/helloworld # ./main.out 
Hello World!
```