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
    void put(string key, int value);
    optional<int> get(string key);
    bool removeKey(string key);
    void printTable();
    bool isPrime(int num);
    int nextPrime(int num);
    void resize();

private:
    vector<vector<Entry>> table;
    size_t count = 0;
    size_t hashKey(string key);
    size_t capacity;
};

// constructor for private variables
HashTable::HashTable(size_t capacity) {
    this->capacity = capacity;
    this->count = 0;
    this->table = vector<vector<Entry>>(capacity);
}

size_t HashTable::hashKey(string key) {
    int total = 0;
    for (int i = 0; i < key.length(); i++) {
        char character = key[i];
        total = (total * 31) + character;
    }
    return total % capacity;
}

/*
    Name: put
    Param: key, value
    Returns: n/a
    Description: Checks to see if a key already exists (if it does it updates
            it's value.) If the key is new it adds it to the table.
*/
void HashTable::put(string key, int value) {
    // runs key through hash function to get index
    int index = hashKey(key);

    // checks to see if the key already exists
    for (int i = 0; i < table[index].size(); i++) {
        if (table[index][i].key == key) {
            table[index][i].value = value;
            return;
       }
    }

    // pushes the new key onto the chain at that index + 1
    table[index].push_back({ key, value });
    count++;

    // check if we are at 3/4 capacity and need to resize
    if ((float)count / capacity >= 0.75) {
        resize();
    }
}

optional<int> HashTable::get(string key) {

}

bool HashTable::removeKey(string key) {

}

void HashTable::printTable() {

}

bool HashTable::isPrime(int num) {

}

int HashTable::nextPrime(int num) {

}

void HashTable::resize() {

}

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