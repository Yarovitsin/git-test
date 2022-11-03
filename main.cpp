#include <iostream>
#include <list>
using namespace std;

list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//function that finds biggest number in a list

int findBiggest(list<int> l) {
    int biggest = 0;
    for (auto i : l) {
        if (i > biggest) {
            biggest = i;
        }
    }
    return biggest;
}

int main() {
    cout << findBiggest(l) << endl;
    return 0;
}
