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

// Refer hash function : http://www.azillionmonkeys.com/qed/hash.html
// Refer Pimpl points : https://marcmutz.wordpress.com/translated-articles/pimp-my-pimpl-%E2%80%94-reloaded/
// Refer #include guard description : http://stackoverflow.com/questions/14909997/why-arent-my-include-guards-preventing-recursive-inclusion-and-multiple-symbol
// Refer template instantiation : http://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor
// Refer alogrithm code : http://www.keithschwarz.com/interesting/code/
// Refer C++ programming : http://boqian.weebly.com/c-programming.html
// Refer Graphs, Cycle detection : http://algo.epfl.ch/_media/en/courses/2011-2012/algorithmique-cycles-2011a.pdf
// Refer next_permutation : http://wordaligned.org/articles/next-permutation | http://www.nayuki.io/page/next-lexicographical-permutation-algorithm
