//
// Created by 张宇洋 on 16/1/22.
//

#include <iostream>
#include <string>
using namespace std;

std::string global_str;
int global_int;
int main()
{
    string name = "";
    string *sp = &name;
    std::cout << sp->empty() << std::endl;
    return 0;
}

