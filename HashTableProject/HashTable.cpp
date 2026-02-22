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
    bool debugMode;

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


int hashKey(int key) {

}

int main() {
    HashTable ht;
    // TODO: simple menu loop or test harness
    return 0;
}