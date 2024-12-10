#include<iostream>
#include<cstring>  // For strcpy and strlen

using namespace std;

class Hero {
public:
    int height;
    char level;
    char *name;

    // Constructor
    Hero(int height, char level, const char name[]) {
        this->height = height;
        this->level = level;
        this->name = new char[strlen(name) + 1];  // Allocate memory
        strcpy(this->name, name);  // Copy name into the allocated memory
    }

    // Copy constructor
    /*
    Hero(const Hero& other) {
        this->height = other.height;
        this->level = other.level;
        this->name = new char[strlen(other.name) + 1];  // Allocate memory
        strcpy(this->name, other.name);  // Copy name
    }
    */
    

    // Destructor to avoid memory leak
    ~Hero() {
        delete[] name;  // Deallocate the memory
    }

    // Print method
    void print() {
        cout << endl << "[" << "height: " << this->height << "," << "level: " << this->level << "," << "name: " << name << "]" << endl;
    }
};

int main() {
    char name[] = "abcdefghij";  // Make sure the string is null-terminated
    Hero h1(12, 'A', name);
    h1.print();

    Hero h2(h1);  // Use the copy constructor to create h2 from h1
    h2.print();

    h1.name[0]='A';
    h1.print();
    h2.print();

    return 0;
}
