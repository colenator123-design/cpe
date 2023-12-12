#include <iostream>
#include <queue>

using namespace std;

class MyStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    /** Push element x onto stack. */
    void push(int x) {
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Push the new element to q1
        q1.push(x);

        // Move elements back from q2 to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    /** Removes the element on the top of the stack and returns that element. */
    int pop() {
        int topElement = q1.front();
        q1.pop();
        return topElement;
    }

    /** Get the top element. */
    int top() {
        return q1.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.top() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.top() << endl;

    cout << "Is the stack empty? " << (stack.empty() ? "Yes" : "No") << endl;

    return 0;
}