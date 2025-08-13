#include<bits/stdc++.h>
using namespace std ; 

// Trie node definition
class Node {
public:
    char data;
    bool Terminal;
    unordered_map<char, Node*> child;

    Node(char ch) {
        data = ch;
        Terminal = false;
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node('\0');
    }

    // Insert a word into the trie
    void insert(const string& word) {
        Node* curr = root;
        for (char ch : word) {
            if (curr->child.find(ch) == curr->child.end()) {
                curr->child[ch] = new Node(ch);
            }
            curr = curr->child[ch];
        }
        curr->Terminal = true;
    }

    // Helper DFS to collect all words under a given node
    void dfs(Node* node, const string prefix, vector<string>& results) {
        if (node->Terminal) {
            results.push_back(prefix);
        }
        for (auto& p : node->child) {
            dfs(p.second, prefix + p.first, results);
        }
    }

    // Print all words in the trie that start with the given prefix
    void autocomplete(const string& prefix) {
        Node* curr = root;
        
        for (char ch : prefix) {
            if (curr->child.find(ch) == curr->child.end()) {
                return;
            }
            curr = curr->child[ch];
        }

        vector<string> results;
        dfs(curr, prefix, results);
        sort(results.begin(), results.end());

        for (const string& word : results) {
            cout << word << "\n";
        }
    }
};

int main() {
    Trie trie;
    trie.insert("sanket");
    trie.insert("sahil");
    trie.insert("sam");
    trie.insert("samarth");
    trie.insert("samson");
    trie.insert("Jay");
    trie.insert("Jayesh");
    trie.insert("Jainam");

    while(1) {
        string str ; 
        cin >> str ;  
        cout << endl ; 
        trie.autocomplete(str) ; 
        cout << endl ; 
    }
    

    return 0;
}
