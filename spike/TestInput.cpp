#include <gtest/gtest.h>
#include <iostream>
#include <fstream>

int readUserInput(std::istream& input)
{
    std::string value;
    std::cout << "Enter a number: ";
    getline(input, value);
    //input >> value;
    return std::stoi(value);
}

TEST(Some, Test) {
    std::ifstream ifs;
    ifs.open("spike/input.txt", std::ifstream::in);
    //std::cout << "readUserInput from std::cin: " << readUserInput(std::cin) << std::endl;
    std::cout << "readUserInput from ifs: " << readUserInput(ifs) << std::endl;
    std::cout << "readUserInput from ifs: " << readUserInput(ifs) << std::endl;
    ifs.close();
    testing::internal::CaptureStdout();
    std::cout << "test\n";
    std::string output = testing::internal::GetCapturedStdout();
    if (output == "test\n") {
        std::cout << "work\n";
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
