#include <iostream>
#include <fstream>
#include <string>

std::string searchRecord(const std::string& filename, const std::string& search_term) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return "Error: Unable to open file";
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.find(search_term) != std::string::npos) {
            file.close();
            return line; 
        }
    }

    file.close();
    return "Record not found";  
}

int main() {
    std::string filename = "data.txt";
    std::string search_term = "John";  

    std::string result = searchRecord(filename, search_term);
    std::cout << result << std::endl;

    return 0;
}

