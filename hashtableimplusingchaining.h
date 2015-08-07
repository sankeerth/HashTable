#ifndef HASHTABLEIMPLUSINGCHAINING
#define HASHTABLEIMPLUSINGCHAINING

#include "Ihashtableimpl.h"

namespace {
	const int TABLE_SIZE = 128;
}

template <typename T, typename V>
class HashTableImplUsingChaining : public IHashTableImpl<T, V> {
  public:
  	HashTableImplUsingChaining();
  private:
    int put(T key, V value);
    V get(T key);
    int remove(T key);
    int replace(T key, V value);
    void show();
    int clear();

    struct TableList
    {
    	T key;
    	V value;
    	TableList* next;
    };

    int m_index;
	TableList** m_table;
};

#endif // HASHTABLEIMPLUSINGCHAINING

