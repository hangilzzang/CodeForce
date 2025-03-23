#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int output = 0;

    for(int i = 0; i < n; i++) {
        std::string code;
        std::cin >> code;
        if (code.contains("++")) {
            output += 1;
        }
        else {
            output -=1;
        }
    }

    std::cout << output;
}