#include <iostream>
#include <string>

int main() {
   int num_line;
   std::cin >> num_line;

    for (int i = 0; i < num_line; i++) { 
        std::string word;
        std::cin >> word;
        
        int word_length = word.length();

        if (word_length <= 10) {
            std::cout << word << std::endl;
        } else {
            std::cout << word[0] << word_length - 2 << word[word_length - 1] << std::endl;
        }
    }
   return 0;
}