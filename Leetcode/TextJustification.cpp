#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> str = {"What", "must", "be", "acknowledgment", "shall", "be"};

    int len = 0;
    vector<string> ans;
    vector<string> temp;

    for (int i = 0; i < str.size(); i++) {
        len += str[i].length();
        temp.push_back(str[i]);

        // Check if it's the last word or adding the next word would exceed the limit
        if (i == str.size() - 1 || len + temp.size() - 1 + str[i + 1].length() > 16) {
            int extraSpaces = 16 - len;  // Calculate remaining spaces to fill
            int words = temp.size() - 1;  // Number of gaps between words

            string result = "";

            
            if(temp.size() == 1){
                result+=temp[0] ; 
                
                int total_space = extraSpaces; 
                while(total_space > 0){
                    result+=" " ; 
                    total_space-- ; 
                }
            }
            else {
                  int spacesPerGap = extraSpaces / words;
                    int rem = extraSpaces % words;

                for(int j = 0 ; j < temp.size()-1 ; j++){
                    result+=temp[j] ; 

                    int total_space = spacesPerGap + (rem > 0 ? rem : 0) ; 

                    while(total_space > 0){
                        result+=" " ; 
                        total_space-- ; 
                    }
                    rem = 0 ; 
                }

                result+=temp[temp.size()-1] ; 
            }
            ans.push_back(result);

            temp.clear();
            len = 0;
        }
    }

    // Print the result
    for (const string& line : ans) {
        cout << "\"" << line << "\"" << endl;
    }

    return 0;
}
