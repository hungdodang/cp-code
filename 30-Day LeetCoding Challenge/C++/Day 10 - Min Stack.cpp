#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

class MinStack {
public:
	/** initialize your data structure here. */
    stack <pair<int, int>> s;
	MinStack() {
	}

	void push(int x) {
		if (s.empty()) {
			s.push({ x,x });
		}
		else {
			s.push({ x, min(x,s.top().second) });
		}
	}

	void pop() {
		if (!s.empty()) {
			s.pop();
		}
	}

	int top() {
		if (!s.empty()) {
			return s.top().first;
		}
		return 0;
	}

	int getMin() {
		if (!s.empty()) {
			return s.top().second;
		}
		return 0;
	}
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin(); 
    minStack.pop();
    minStack.top();   
    minStack.getMin();
    return 0;
}