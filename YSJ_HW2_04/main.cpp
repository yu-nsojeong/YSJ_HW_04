#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class Node{

public:
    Node(){
        left = NULL;
        right = NULL;
    }

    char c;
    Node * left;
    Node * right;


};

class Preorder : Node{//전위

public:
    void preorder(Node * node){
        cout << node->c;

        if(node->left != NULL){
            preorder(node->left);
        }

        if(node->right != NULL){
            preorder(node->right);
        }
    }

};

class Inorder : Node{//중위

public:
    void inorder(Node * node){
        if(node->left != NULL){
            inorder(node->left);
        }

        cout << node->c;

        if(node->right != NULL){
            inorder(node->right);
        }
    }

};
class Postorder : Node{//후위

public:
    void postorder(Node * node){
        if(node->left != NULL){
            postorder(node->left);
        }

        if(node->right != NULL){
            postorder(node->right);
        }

        cout << node->c;
    }

};


int main(void){
    int N;
    vector<Node> node(26);
    Node * root;
    Preorder a;
    Inorder b;
    Postorder c;

    cin >> N;

    //알파벳에 따라 노드 그리기
    for(int i = 0; i < N; i++){
        char parent, left, right;

        cin >> parent >> left >> right;
        node[parent - 'A'].c = parent;

        if(left != '.'){
            node[parent - 'A'].left = &node[left - 'A'];
        }
        if(right != '.'){
            node[parent - 'A'].right = &node[right - 'A'];
        }
    }

    root = &node[0];

    a.preorder(root);
    cout << endl;
    b.inorder(root);
    cout << endl;
    c.postorder(root);

    return 0;
}



