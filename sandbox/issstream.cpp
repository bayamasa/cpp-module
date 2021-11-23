#include <sstream>
#include <iostream>

int main(int argc, char const *argv[]){
    std::string str(argv[1]);
    std::istringstream iss(str);

    int num;
    iss >> num;
    std::cout << num << std::endl; // 「42」と表示される
}
