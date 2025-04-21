#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    Node *new_root = new Node(data);

    if (data == -1)
        return NULL;
    cout << "Enter data for inserting in left: " << endl;
    new_root->left = buildTree();
    cout << "Enter data for inserting in right: " << endl;
    new_root->right = buildTree();

    return new_root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << "\n";
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    // creating a tree.
    root = buildTree();

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order traversal.
    cout << "Printing lever order traversal: " << endl;
    levelOrderTraversal(root);

    // inorder tree traversal
    cout << "Inorder traversal is: ";
    inorderTraversal(root);
    cout<< "\n";

    //preorder tree traversal
    cout << "Preorder traversal is: ";
    preorderTraversal(root);
    cout<< "\n";

    //postorder tree traversal
    cout << "Postorder traversal is: ";
    postorderTraversal(root);
    cout<< "\n";

    return 0;
}