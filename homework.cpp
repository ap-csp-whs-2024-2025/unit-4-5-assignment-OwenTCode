#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    // Task 1
    std::cout << "Task 1\n";
    std::vector<int> Integers = {1, 2, 3, 4, 5};
    std::vector<double> Double = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::vector<std::string> Strings = {"one", "two", "three", "four", "five"};
    std::cout << "Lists exist now\n";

    // Task 2
    std::cout << "Task 2\n";
    std::cout << "Index 1 is: " << Integers[1] << std::endl;
    std::cout << "Index 3 is: " << Integers[3] << std::endl;
    std::cout << "Index 5 is: " << Integers[5] << std::endl;

    // Task 3
    std::cout << "Task 3\n";
    displayList(Strings);
    Strings.push_back("Owen");
    displayList(Strings);

    // Task 4
    std::cout << "Task 4\n";
    displayList(Double);
    Double.pop_back();
    displayList(Double);

    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}