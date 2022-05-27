#include <iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int n;
    std::cout << "Enter n:";
    std::cin >> n;

    std::stringstream ss;
    ss << n;
    std::string str = ss.str();
    std::string result;

    for (int i = 0; i < str.size(); ++i)
        if (str[i] != '0' && str[i] != '5')
            result.push_back(str[i]);
    std::cout << result;

}
