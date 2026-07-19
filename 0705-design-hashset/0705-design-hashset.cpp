class MyHashSet {
public:
    vector<vector<int>> table;
    int size = 1000;
    MyHashSet() { table.resize(size); }
    void add(int key) {
        int index = key % size;
        for (int x : table[index]) {
            if (x == key) {
                return;
            }
        }
          table[index].push_back(key);
    }
    void remove(int key) {
        int index = key % size;
        for (int i = 0; i < table[index].size(); i++) {
            if (table[index][i] == key) {
                table[index].erase(table[index].begin() + i);
                return;
            }
        }
    }
    bool contains(int key) {
        int index = key % size;
        for (int x : table[index]) {
            if (x == key) {
                return true;
            }
        }
        return false;
    }
};
