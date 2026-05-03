#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> list1 = {10, 30, 50};
    list<int> list2 = {20, 40, 60};

    // Merging two sorted lists
    list1.merge(list2);

    cout << "Merged Sorted List: ";
    for (int n : list1) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
