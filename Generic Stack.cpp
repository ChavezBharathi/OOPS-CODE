#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack {
    vector<T> elements;
public:
    void push(T val) { elements.push_back(val); }
    void pop() { if (!elements.empty()) elements.pop_back(); }
    T peek() { return elements.back(); }
    void show() {
        for (T i : elements) cout << i << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(10); s.push(20);
    s.show();
    s.pop();
    cout << "Top: " << s.peek() << endl;
    return 0;
}
