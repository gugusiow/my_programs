#include <iostream>
#include <vector>

int main() {

    //the question was to find the sum of even numbers and the product of odd numbers in the given vector

    std::vector<int> numbers = {2, 4, 3, 6, 1, 9, 20, 10, 19, 34, 22, 12, 69, 4, 206};

    int evenSum = 0;        //first I declared these 2 variables
    int productOdd = 1;     //this var must != 0, because anything multiplied by 0 is equal to 0

    for(int i = 0; i < numbers.size(); i++){        //then I created this for loop with a nested if else statement
        if(numbers[i] % 2 == 0){                    //the math behind it is that even numbers will have a modulo remainder of 0, while odd numbers will != 0
        evenSum += numbers[i];                      //this is just to sum up all the even numbers
        } else {
        productOdd *= numbers[i];                   //this is to multiply all the odd numbers
        }
    }

    std::cout << "Sum of even numbers is " << evenSum << "\n";          //as usual, output the answers
    std::cout << "Product of odd numbers is " << productOdd << "\n";    //this "program" should work for most test cases
return 0;
}