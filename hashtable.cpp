#include "hashtable.h"
#include"hashtablefactory.cpp"

template <typename T, typename V>
HashTable<T, V>::HashTable() :
	m_factory(new HashTableFactory)
{
	m_impl = m_factory->create<T, V>();
}

template <typename T, typename V>
int HashTable<T, V>::put(T key, V value)
{
	return m_impl->put(key, value);
}

template <typename T, typename V>
V HashTable<T, V>::get(T key)
{
	return m_impl->get(key);
}

template <typename T, typename V>
int HashTable<T, V>::remove(T key)
{
	return m_impl->remove(key);
}

template <typename T, typename V>
int HashTable<T, V>::replace(T key, V value)
{
	return m_impl->replace(key, value);
}

template <typename T, typename V>
void HashTable<T, V>::show()
{
    m_impl->show();
}

template <typename T, typename V>
int HashTable<T, V>::clear()
{
	return m_impl->clear();
}

template class HashTable<std::string, int>;
