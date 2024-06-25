#include <iostream> // EM C#
#include <vector>

int main()
{
    std::vector<int> numbers;
    
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    
    for(int number : numbers){
        std::cout <<number << "\n"; //("\n" organizacao numeral) 
    }
    std::cout << std::endl;

    return 0;
}