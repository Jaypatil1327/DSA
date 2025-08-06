#include<bits/stdc++.h>
using namespace std ; 

class Node {
    public : 
        char data ;
        bool isT ; 
        unordered_map<char , Node*>  child ; 

        Node(char val) {
            data = val ; 
            isT = false ; 
        }
};

class Trie {
    public : 
        Node* root ;
        Trie() {
            root = new Node('/') ; 
        } 

        void insert(string str) {
            Node* curr = root ; 
            for(int i = 0 ; i < str.length() ; i++) {
                if(curr->child.find(str[i]) == curr->child.end()) {
                    curr->child[str[i]] = new Node(str[i]) ; 
                }
                curr = curr->child[str[i]] ; 
            }
            curr->isT = true ; 
        }

        void dfs(Node* starter , string prefix , vector<string>& res) {
            if(starter->isT) {
                res.push_back(prefix) ; 
            }
            for(auto ele : starter->child) {
                dfs(ele.second , prefix + ele.first , res) ; 
            }
        }


        vector<string> similarWord(string Pre) {
            Node* curr = root ; 
            for(int i = 0 ; i < Pre.length() ; i++) {
                if(curr->child.find(Pre[i]) == curr->child.end()) {
                    return {Pre.substr(0,i+1)} ;  
                }
                curr = curr->child[Pre[i]] ; 
            }

            vector<string> res ; 
            dfs(curr , Pre , res) ; 
            return res ; 
        }
};

int main() {
    Trie trie ; 

    while(1) {
        int x ; 
        cout << "to insert press 1 / to check similar word press 2 / to exit press 3 \n" ; 
        cin >> x ; 

        if(1 == x) {
            cout << "enter word : " ; 
            string word ; 
            cin >> word ; 
            trie.insert(word) ;
        } else if(2 == x) {
            string str ; 
            cin >> str ; 

            for(auto ele : trie.similarWord(str)) {
                cout << ele << " " ; 
            }
        }
        else break; 

        cout << endl ; 
        cout << endl ; 
        cout << endl ; 

    }
}