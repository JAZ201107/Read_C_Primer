//
// Created by 张宇洋 on 14/2/22.
//
#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;
struct student {

};

// 9.4
bool find_element(const vector<int>::const_iterator begin,
                  const vector<int>::const_iterator end, const int &a) {
    for (auto it = begin; it != end; it++) {
        if (a == *it) return true;
    }
    return false;
}

// 9.5
vector<int>::const_iterator find_element_9_5(const vector<int>::const_iterator begin,
                                             const vector<int>::const_iterator end, const int &a) {
    for (auto it = begin; it != end; it++) {
        if (a == *it) return it;
    }

    return end;
}


// 9.15
bool compare_2_vector(const vector<int>& v1, const vector<int>& v2)
{
    return v1==v2;
}

// 9.16
void compare_vector_list(const vector<int>&v1,const list<int> &l1)
{
    vector<int> l_vector(l1.begin(),l1.end());
    if(v1>l_vector)
    {
        cout << "v1 Bigger" << endl;

    }
}
int main() {

    // 9.2
    list<deque<int>> lid;

    // 9.3
    // the constraints for two iterators, begin and end

    // 9.4
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int b = 3;
    cout << find_element(v.begin(), v.end(), b) << endl;

    // 9.5
//    vector<int> vi;
//    vi.push_back(1);
//    vi.push_back(2);
//    vi.push_back(3);
//    vi.push_back(4);
//    int k =0;
//    cout << "Enter a Number: " ;
//    std::cin >> k;
//    auto it = find_element_9_5(vi.cbegin(), vi.cend(), k);
//    if (it == vi.end())
//        std::cout << "No found " << k << " in range" << std::endl;
//    else
//        std::cout << "Found " << *it
//                  << " at position " << it - vi.cbegin() +1<< std::endl;

    // 9.2.3
    list<string> a = {"Milton", "Shakespeare", "austen"};
    auto it1 = a.begin();
    auto it2 = a.rbegin();
    auto it3 = a.begin();
    cout << *it1 << " " << *it2 << *it3 << endl;
    *it1 = "MILTON";
    cout << *it3 << endl;

    // 9.2.4 define and initializaing a container
    list<string> authors = {"Milton", "Shakespeare", "austen"};
    vector<const char*> articles = {"a","an","the"};
    list<string> list2(authors); // copy constructor
    // char * can convert to string
    // pass iterator no need container type same
    // vector<string> vector2(authors); // error
    vector<string> vector3(authors.begin(),authors.end());
    auto  it = authors.begin();
    ++it;
    ++it;
    vector<string> vector4(authors.begin(),it); // denote a range
    for(auto i: vector4) cout << i << " ";

    vector<int> ivec(10,-1); // ten elements, each initialize to -1
    list<string> svec(10,"hi" ); // ten elements, each is "hi"

    // Library array
    // to use library array, must specify container size
    array<int, 10> i{};
    // can copy and assign
    array<int, 10> copy_i(i);


    // 9.2.5 assign and swap
    vector<int> swap_1{1,2,3,4,5};
    vector<int> swap_2{6,7,8,9,10};
    swap_2.swap(swap_1);
    for(auto &i:swap_1) cout << i <<" ";
    cout << endl;
    for(auto &i:swap_2) cout << i <<" ";
    return 0;
}// end main

