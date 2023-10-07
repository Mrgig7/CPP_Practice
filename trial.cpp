#include <iostream>
#include <string>

template <typename T>
T add(const T& arg1, const T& arg2) {
    return arg1 + arg2;
}

template <typename T>
T add(const T& arg1, const T& arg2, const T& arg3) {
    return arg1 + arg2 + arg3;
}

template <typename T>
std::string add(const std::string& arg1, const T& arg2) {
    return arg1 + std::to_string(arg2);
}

int main() {
    std::string inp_type;
    std::cin >> inp_type;

    if (inp_type == "int") {
        int inpl, inp2, inp3;
        std::cin >> inpl >> inp2 >> inp3;

        int result1 = add(inpl, inp2);
        int result2 = add(inpl, inp2, inp3);

        std::cout << result1 << std::endl;
        std::cout << result2 << std::endl;
    } else if (inp_type == "str") {
        std::string inpl, inp2, inp3;
        std::cin >> inpl >> inp2 >> inp3;

        std::string result1 = add(inpl, inp2);
        std::string result2 = add(inpl, inp2, inp3);

        std::cout << result1 << std::endl;
        std::cout << result2 << std::endl;
    }

    return 0;
}