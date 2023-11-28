#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    input = input + 1;
    // Process the input (you can replace this with your own logic)
    std::string result = "Processed: " + input;

    // Output the result
    std::cout << result << std::endl;

    return 0;
}