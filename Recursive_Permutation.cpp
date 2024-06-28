#include <iostream>
#include <string>


void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void permutate(std::string str, int start, int end) {
    if (start == end) {
        std::cout << str << std::endl;
    }
    else {
        for (int i = start; i <= end; i++) {
            swap(str[start], str[i]);
            permutate(str, start + 1, end);
            swap(str[start], str[i]);
        }
    }
}

int main() {
    // Program intro
    std::cout << "Word Permutator <- Not sure if that is a real word or if I made that up :p\n" << "\n";
    std::string permutation;
    std::cout << "Enter the word you want to permute: ";
    std::cin >> permutation;
    int n = permutation.size();
    permutate(permutation, 0, n - 1);
    return 0;
}
