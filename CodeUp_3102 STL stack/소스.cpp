#include <iostream>
#define MAX 201
using namespace std;

class Stack
{
private:
	int _data[MAX];
	int _top;

public:
	Stack()
	{
		_data[0] = 0;
		_top = -1;
	}

	void push(int key)
	{
		_data[++_top] = key;
	}
	bool empty()
	{
		if (size() == 0)
			return 1;
		else
			return 0;
	}
	int top()
	{
		if (!empty())
		{
			return _data[_top];
		}
		return -1;
	}
	void pop()
	{
		if (!empty())
		{
			_top--;
		}
	}
	int size()
	{
		return _top + 1;
	}
};
int main()
{
	Stack s;
	int n, key;
	string input, buffer;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == "push(")
		{
			cin >> key >> buffer;
			s.push(key);
		}
		else if (input == "top()")
		{
			cout << s.top() << endl;
		}
		else if (input == "pop()")
		{
			s.pop();
		}
		else if (input == "size()")
		{
			cout << s.size() << endl;
		}
		else if (input == "empty()")
		{
			if (s.empty())
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
	}
	return 0;
}