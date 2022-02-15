//
// Created by 张宇洋 on 15/2/22.
//

#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;


// example of emplace_back
struct President {
    std::string name;
    std::string country;
    int year;

    President(std::string p_name, std::string p_country, int p_year)
            : name(std::move(p_name)), country(std::move(p_country)), year(p_year) {
        std::cout << "I am being constructed.\n";
    }

    President(President &&other)
            : name(std::move(other.name)), country(std::move(other.country)), year(other.year) {
        std::cout << "I am being moved.\n";
    }

    President &operator=(const President &other) = default;
};

// 9.18
void Exercise_9_18() {
    deque<string> words;
    string word;
    while (cin >> word) words.push_back(word);
    for (auto p = words.begin(); p != words.end(); p++) cout << *p << " ";
    cout << endl;
}

void Exercise_9_19() {
    list<string> words;
    string word;
    while (cin >> word) words.push_back(word);
    for (const auto &word: words) cout << word << " ";
    cout << endl;
}

void Exercise_9_20() {
    list<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> Enumbers;
    deque<int> Onumbers;
    for (const auto &n: numbers) {
        if (n % 2 == 0) Enumbers.push_back(n);
        else if (n % 2 == 1) Onumbers.push_back(n);
    }
    for (auto i: Enumbers) cout << i << " ";
    cout << endl;
    for (auto i: Onumbers) cout << i << " ";
}

void Exercise_9_24() {
    vector<string> v;
    cout << v.front() << endl;
    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << *v.begin() << endl;
}

void Exercise_9_26() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> iv(begin(ia), end(ia));
    list<int> il(begin(ia), end(ia));
    for (auto it = iv.begin(); it != iv.end();)
        if (*it % 2) ++it;
        else it = iv.erase(it);

    for (auto it = il.begin(); it != il.end();)
        if (*it % 2) it = il.erase(it);
        else ++it;

    std::cout << "vector iv: ";
    for (const auto &i: iv)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "list   il: ";
    for (const auto &i: il)
        std::cout << i << " ";
    std::cout << std::endl;
}


int main() {
//    vector<string> v={"AAAA","BBBB","CCCC"};
//    v.insert(v.begin(), "Hello"); // inset begin
//    v.insert(v.begin(),10,"NAME");
//    for(auto &i:v) cout << i << " ";
//
//    vector<string> temp = {"DDDD","EEEEE","FFFFFF","GGGG"};
//    v.insert(v.end(),temp.begin(),temp.end());
//    auto s = v.insert(v.end(),{"HHHH","JJJJ "});
//
//    for(auto &i:v) cout << i << " ";

//    vector<President> p;
//    p.emplace_back("David","China",4);
//    cout << p[0].country << " " << p[0].name << p[0].year << endl;
//    p.push_back(President("Matte","USA",3));
//    cout << p[1].country << " " << p[1].name << p[1].year << endl;

    // 9.18
    //Exercise_9_18();

    //Exercise_9_20();

    //Exercise_9_24();
//    Exercise_9_26();
    return 0;
}


