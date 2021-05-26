// local test file

#include "heap.h"
#include <queue>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cassert>
#include "heap.cpp"
using namespace std;

int main () {

    std::priority_queue<int, std::vector<int>, std::greater<int>> data;
    Heap h;

    h.push(12);
    h.push(35);
    h.push(13);
    h.push(40);
    h.push(41);
    h.push(14);
    h.push(17);
    h.push(42);

    h.push(21);

    cout << h.top() << endl; // 12
    h.pop();
    cout << h.top() << endl; // 13
    h.pop();
    cout << h.top() << endl; // 14
    
    h.pop();
    h.pop();

    cout << h.top() << endl;



    return 0;
}