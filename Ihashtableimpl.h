#ifndef HASHTABLEIMPL
#define HASHTABLEIMPL

#include <memory>

template <typename T, typename V>
class IHashTableImpl {
  public:
    virtual int put(T key, V value) = 0;
    virtual V get(T key) = 0;
    virtual int remove(T key) = 0;
    virtual int replace(T key, V value) = 0;
    virtual void show() = 0;
    virtual int clear() = 0;
};

template <typename T, typename V>
using HashTableImplPtr = std::shared_ptr<IHashTableImpl<T, V>>;

#endif // HASHTABLEIMPL
