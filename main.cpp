#include <iostream>
#include <fstream>
#include <string>
int main() {
    // Create a text string, which is used to output the text file
    std::string myText;

// Read from the text file
    std::ifstream MyReadFile("kroA100.tsp");

// Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        std::cout << myText;
    }
    std::cout << "LOL";
    MyReadFile.close();

    return 0;
}
