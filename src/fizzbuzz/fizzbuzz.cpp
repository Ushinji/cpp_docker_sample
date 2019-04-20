#include <string>

const std::string fizzbuzz(int num) {
    bool isFizz = false;
    bool isBuzz = false;
    if(num % 3 == 0) isFizz = true;
    if(num % 5 == 0) isBuzz = true;

    if(isFizz && isBuzz) return "FizzBuzz";
    if(isFizz) return "Fizz";
    if(isBuzz) return "Buzz";
    return std::to_string(num);
}
