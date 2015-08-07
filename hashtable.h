#ifndef HASHTABLE
#define HASHTABLE

#include "log.h"
#include "Ihashtableimpl.h"
#include "hashtablefactory.h"

template <typename T, typename V>
class HashTable {
  public:
    HashTable();

    ~HashTable() {}
    // To add key-value pair to the hash table
    int put(T key, V value);
    // To get value from the provided key as input
    V get(T key);
    // To remove the key-value pair from hash table
    int remove(T key);
    // To replace with the new value for provided key
    int replace(T key, V value);
    // To display the contents of the hash table
    void show();
    // To clear the hash table
    int clear();
  private:
    HashTableImplPtr<T, V> m_impl;
    std::shared_ptr<HashTableFactory> m_factory;
};

#endif // HASHTABLE

