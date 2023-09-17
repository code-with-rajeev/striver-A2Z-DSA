//https://www.codingninjas.com/studio/problems/children-sum-property_8357239?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

bool isParentSum(Node *root){
    // Write your code here.
    if (root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }

    int l = 0;
    int r = 0;

    if(root->left) {
        if(! isParentSum(root->left)) return false;
        l = root->left->data;
    }
    if(root->right) {
        if(! isParentSum(root->right)) return false;
        r = root->right->data;
    }
    
    if(root->data == l+r){
        return true;
    }
    
    return false;

}