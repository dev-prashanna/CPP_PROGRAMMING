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
    queue<Node*> pending; pending.push(root.get()); while(!pending.empty()){Node* node=pending.front();pending.pop();a.push_back(node->value);if(node->left) pending.push(node->left.get());if(node->right) pending.push(node->right.get());}
    sort(a.begin(),a.end()); size_t n=a.size(); cout<<(n%2?double(a[n/2]):(a[n/2-1]+a[n/2])/2.0)<<"\n";
    return 0;
}
