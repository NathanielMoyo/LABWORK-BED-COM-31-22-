#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string capitalizedText = str;
    bool capitalizeNext = false;
    for (char& c : capitalizedText) {
        if (isspace(c)) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
    return capitalizedText;
}

int main() {
    string fileData;

    // Open the input file
    ifstream inputFile("input.txt");

    // Check if the file was opened successfully
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read the file contents into fileData
    getline(inputFile, fileData);

    // Close the file
    inputFile.close();

    // Print the contents of input.txt
    cout << "Contents of input.txt:\n" << fileData << endl;

    // Count vowels and words
    int vowelsCount = 0;
    int wordsCount = 0;
    bool prevWasSpace = true; // Start with true to capitalize the first letter
    for (char c : fileData) {
        if (isspace(c)) {
            prevWasSpace = true;
        } else {
            if (prevWasSpace) {
                wordsCount++;
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    vowelsCount++;
                }
            }
            prevWasSpace = false;
        }
    }

    // Output the number of vowels and words
    cout << "Number of vowels in the text: " << vowelsCount << endl;
    cout << "Number of words in the text: " << wordsCount << endl;

    // Reverse the text
    string reversedText(fileData.rbegin(), fileData.rend());

    // Output the reversed text
    cout << "Reversed text:\n" << reversedText << endl;

    // Capitalize the second letter of each word
    string capitalizedText = capitalizeSecondLetter(fileData);

    // Output the text with second letter capitalized
    cout << "Text with second letter capitalized:\n" << capitalizedText << endl;

    return 0;
}