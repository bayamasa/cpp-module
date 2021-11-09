#include <iostream>

int main(){
    enum level { debug, info, warn, error};
    level lv = info;
    std::cout << lv << std::endl;
}
