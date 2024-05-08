#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::transform
#include <cctype>    // For std::toupper

// Function to count the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count the number of words in a string
int countWords(const std::string& str) {
    int count = 0;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

std::string Reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}


std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
            }
            capitalize = !capitalize;
        }
    }
    return result;
}

int main() {
    std::ifstream file("textfile.txt"); 
    if (!file) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::getline(file, fileData); 
    file.close(); 

    std::cout << "Original statement: " << fileData << std::endl;

    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    int wordCount = countWords(fileData);
    std::cout << "Number of words: " << wordCount << std::endl;

    std::string reversedStatement = Reverse(fileData);
    std::cout << "Reversed statement: " << reversedStatement << std::endl;

    std::string capitalizedStatement = capitalizeSecondLetter(fileData);
    std::cout << "Capitalized statement: " << capitalizedStatement << std::endl;

    return 0;
}
