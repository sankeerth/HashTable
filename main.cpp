#include <iostream>
#include "hashtable.h"

int main () {
    HashTable<std::string, int> hash;
    hash.show();
    hash.clear();
    return 0;
}
