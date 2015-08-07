#ifndef HASHTABLEFACTORY
#define HASHTABLEFACTORY

#include "hashtable.h"

class HashTableFactory {
  public:
  	HashTableFactory();
    template <typename T, typename V>
    HashTableImplPtr<T, V> create();
  private:
  	enum HashImpl{
  		Chaining,
  		Addressing
  	};

  	HashImpl m_hashImpl;
};


#endif // HASHTABLEFACTORY

