/*
Question:
Design a HashSet without using any built-in hash table libraries.

To be specific, your design should include these functions:

add(value): Insert a value into the HashSet. 
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.
 
Example:
MyHashSet hashSet = new MyHashSet();
hashSet.add(1);         
hashSet.add(2);         
hashSet.contains(1);    // returns true
hashSet.contains(3);    // returns false (not found)
hashSet.add(2);          
hashSet.contains(2);    // returns true
hashSet.remove(2);          
hashSet.contains(2);    // returns false (already removed)

Note:
All values will be in the range of [0, 1000000].
The number of operations will be in the range of [1, 10000].
Please do not use the built-in HashSet library.
 
*/


// Solution
#include <iostream>
#include <vector>
using namespace std;

class MyHashSet {
public:
    vector<bool> v;
    /** Initialize your data structure here. */
    MyHashSet() {
        v.resize(1024);
    }
    
    void add(int key) {
        while (key > v.size())
        {
            v.resize(v.size() * 2);
        }
        v[key] = true;
    }
    
    void remove(int key) {
        if (key < v.size())
        {
            v[key] = false;
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return key < v.size() && v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

// test
// int main()
// {
//     MyHashSet* hashSet = new MyHashSet();
//     hashSet->add(1);         
//     hashSet->add(2);         
//     cout << hashSet->contains(1) << endl;    // returns true
//     cout << hashSet->contains(3) << endl;    // returns false (not found)
//     hashSet->add(2);          
//     cout << hashSet->contains(2) << endl;    // returns true
//     hashSet->remove(2);          
//     cout << hashSet->contains(2) << endl;    // returns false (already removed)
// }