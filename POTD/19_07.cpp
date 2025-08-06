#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    bool isTerm;
    unordered_map<string, Node *> child;

    Node(string val)
    {
        data = val;
        isTerm = false;
    }
};

class Trie
{
public:
    Node *root;
    vector<string> ans ; 

    Trie()
    {
        root = new Node("/0");
    }

    void insert(string str)
    {
        string st = "" ; 
        Node* temp = root ;
        for (int i = 0; i < str.length(); i++){    
            if (i == str.length() - 1 or str[i + 1] == '/'){

                st+=str[i] ; 
                cout << st << " " ; 
                if(temp->child.find(st) == temp->child.end()) {
                    Node* dummy = new Node(st) ; 
                    temp->child[st] = dummy ; 
                } 
                temp = temp->child[st] ; 

                if (i == str.length() - 1)
                    break;
                st = "";

            }
            else{
                st += str[i];
            }
        }
        temp->isTerm = true ; 
    }

    void dfs(Node* pointer , string prefix) {
        if(pointer->isTerm == true) {
            ans.push_back(prefix) ; 
            return ;
        }
        for(auto ele : pointer->child) {
            dfs(ele.second , prefix+ele.first) ; 
        }
    }

    void solve() {
        Node* curr = root ; 
        dfs(curr , "") ; 
        sort(ans.begin() , ans.end()) ; 
    }

};

int main()
{
    Trie trie ;  
    vector<string> x = {"/a","/a/b","/c/d","/c/d/e","/c/f"} ; 

    for(int i = 0 ; i < x.size() ; i++) {
        trie.insert(x[i]) ; 
    }
    trie.solve() ; 
    cout << endl << endl ; 
    for(int i= 0 ; i < trie.ans.size() ; i++) {
        cout << trie.ans[i] << " " ; 
    }
}