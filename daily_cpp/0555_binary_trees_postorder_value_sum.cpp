#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    unique_ptr<Node> left,right;
    explicit Node(int x):value(x) {}
};
void insertNode(unique_ptr<Node>& root,int value) {
    if(!root) root=make_unique<Node>(value);
    else if(value<root->value) insertNode(root->left,value);
    else insertNode(root->right,value);
}
void traverse(Node* root,vector<int>& values,int order) {
    if(!root) return;
    if(order==0) values.push_back(root->value);
    traverse(root->left.get(),values,order);
    if(order==1) values.push_back(root->value);
    traverse(root->right.get(),values,order);
    if(order==2) values.push_back(root->value);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unique_ptr<Node> root; for(int x:vector<int>{8,4,12,2,6,10,14,1,3,5,7,9,11,13,15}) insertNode(root,x); vector<int> a;
    traverse(root.get(),a,2);
    cout<<accumulate(a.begin(),a.end(),0)<<"\n";
    return 0;
}
