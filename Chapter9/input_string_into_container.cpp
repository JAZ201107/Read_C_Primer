//
// Created by 张宇洋 on 14/2/22.
//

#include <list>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    std::list<int> li;
    std::vector<int> vi;

    string s;
    std::cout << "Please enter list<int> li:   ";
    std::getline(std::cin, s);
    istringstream iss(s);
    int k;
    while(iss >> k) li.push_back(k);

    std::cout << "Please enter vector<int> vi: ";
    std::getline(std::cin, s);
    iss.clear();
    iss.str(s);
    while(iss >> k) vi.push_back(k);

    for(const auto &i : li) cout << i <<" ";
    cout << endl;
    for(const auto &i : vi) cout << i <<" ";
}
