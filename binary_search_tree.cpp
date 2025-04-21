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

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        Node *new_node = new Node(data);
        return new_node;
    }
    if (data < root->data)
    {
        // inserting into left part of the tree.
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        // inserting into right part of the tree.
        root->right = insertIntoBST(root->right, data);
    }
    return root;
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

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
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
    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    //10 8 21 7 27 5 4 3 -1

    // level order traversal
    cout << "\nLevel Order Traversal:\n";
    levelOrderTraversal(root);

    // inorder tree traversal
    cout << "Inorder traversal is: ";
    inorderTraversal(root);
    cout << "\n";

    // preorder tree traversal
    cout << "Preorder traversal is: ";
    preorderTraversal(root);
    cout << "\n";

    // postorder tree traversal
    cout << "Postorder traversal is: ";
    postorderTraversal(root);
    cout << "\n";

    return 0;
}