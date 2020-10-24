#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
};

Node *create(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

void insert(Node *&root, int data)
{
    if (root == NULL)
    {
        root = create(data);
    }
    else if (root->data > data)
    {
        insert(root->left, data);
    }
    else
    {

        insert(root->right, data);
    }
}

void display(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " " << root << "\n";
        display(root->left);
        display(root->right);
    }
}

int main()
{
    // your code goes here
    Node *root = NULL;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        insert(root, num);
    }
    cout << "at last root" << root->data << "\n";
    display(root);
    return 0;
}
