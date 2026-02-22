#include <iostream>
#include <string>
#include <vector>
#include <optional>
#include <cmath>

using namespace std;

struct Entry {
	string key;
	int value;
};

class HashTable {
public:
    HashTable(size_t capacity = 11);
    void put(const string& key, int value);
    optional<int> get(const string& key) const;
    bool removeKey(const string& key);
    void printTable() const;

private:
    vector<vector<Entry>> table;
    size_t count = 0;
    size_t hashKey(const string& key) const;
    size_t capacity;
};

int hashKey(int key);
void put(int key, int value);
int get(int key);
bool removeKey(int key);
void printTable();
bool isPrime(int num);
int nextPrime(int num);
void resize();



int main() {
    HashTable ht;
    int loop = 1;
    int choice;
    
    while (loop == 1) {
        cout << "Please select your operation: \n";
        cout << "1 = Put  -------- 2 = Get -------- 3 = Remove -------- 4 = Print -------- 5 = Quit\n";
        cin >> choice;

        if (choice == 1) {

        }
        else if (choice == 2) {

        }
        else if (choice == 3) {

        }
        else if (choice == 4) {

        }
        else if (choice == 5) {
            break;
        }
    }

    cout << "\nHope you enjoyed! :D";
    return 0;
}