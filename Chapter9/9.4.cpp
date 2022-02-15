//
// Created by 张宇洋 on 15/2/22.
//

#include <iostream>
#include <list>
#include <deque>
#include <vector>

using namespace std;
int main()
{
    vector<string> s;
    s.reserve(50);
    cout << s.capacity() << endl;
    return 0;
}
