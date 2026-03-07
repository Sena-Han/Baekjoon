#include <iostream>
using namespace std;

pair<char, char> node[26];

void preorder(char curr)
{
	if (curr != '.')
	{
		cout << curr;
		preorder(node[curr - 'A'].first);
		preorder(node[curr - 'A'].second);
	}
}

void inorder(char curr)
{
	if (curr != '.')
	{
		inorder(node[curr - 'A'].first);
		cout << curr;
		inorder(node[curr - 'A'].second);
	}
}

void postorder(char curr)
{
	if (curr != '.')
	{
		postorder(node[curr - 'A'].first);
		postorder(node[curr - 'A'].second);
		cout << curr;
	}
}

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char parent, left, right;

        cin >> parent >> left >> right;

		node[parent - 'A'].first = left;
		node[parent - 'A'].second = right;
    }

	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postorder('A');

    return 0;
}