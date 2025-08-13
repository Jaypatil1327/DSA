#include<iostream>

using namespace std;

class Names {

private:
    string name;
    int age;

public:
    void setName(string name) { 
        this->name = name; 
    }

    void setAge(int age) { 
        this->age = age; 
    }

    string getName() { 
        return name; 
    }

    int getAge() { 
        return age; 
    }
};

int main() {

    int data_size; 
    cout << "Enter the data size: "; 
    cin >> data_size;

    // Dynamically allocate memory for an array of pointers to Names objects
    Names** enter = new Names*[data_size]; 

    // Loop to create Names objects and input names and ages
    for(int i = 0; i < data_size; i++) {
        enter[i] = new Names();  // Allocate memory for each Names object

        cout << "Enter name: "; 
        string x; 
        int y; 
        cin >> x; 
        cin >> y;

        enter[i]->setName(x);  // Use -> to access the setName method
        enter[i]->setAge(y);   // Use -> to access the setAge method

        cout << endl; 
    }

    // Loop to output the stored names and ages
    for(int i = 0; i < data_size; i++) {
        cout << enter[i]->getAge() << " ";  // Use -> to access the getAge method
        cout << enter[i]->getName();        // Use -> to access the getName method
        cout << endl; 
    }

    // Freeing the dynamically allocated memory
    for(int i = 0; i < data_size; i++) {
        delete enter[i];  // Delete each Names object
    }
    delete[] enter;  // Delete the array of pointers

    return 0;
}
