#include <iostream>

int main() {
    int n;  
    std::cin >> n;

    int count = 0;

    for(int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;
        if(petya + vasya + tonya >= 2) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
