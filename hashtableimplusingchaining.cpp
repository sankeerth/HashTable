#include "hashtableimplusingchaining.h"
#include "log.h"

namespace {
	int hash(std::string) {}
}

template <typename T, typename V>
HashTableImplUsingChaining<T, V>::HashTableImplUsingChaining()
	: m_index(0)
{
	m_table = new TableList* [TABLE_SIZE];
	for (int i = 0; i < TABLE_SIZE; ++i) {
		m_table[i] = NULL;
	}
}

template <typename T, typename V>
int HashTableImplUsingChaining<T, V>::put(T key, V value)
{
	TableList* tl;

	if (!get(key)) {
		tl = new TableList;
		tl->key = key;
		tl->value = value;
		tl->next = m_table[m_index];
		m_table[m_index] = tl;
	} else {
		LOG("Already present");
	}
}

template <typename T, typename V>
V HashTableImplUsingChaining<T, V>::get(T key)
{
	m_index = hash(key);

	for (TableList* tl = m_table[m_index]; tl != NULL; tl = tl->next) {
		if (tl->key == key) {
			return tl->value;
		}
	}
	return NULL;
}

template <typename T, typename V>
int HashTableImplUsingChaining<T, V>::remove(T key)
{

}

template <typename T, typename V>
int HashTableImplUsingChaining<T, V>::replace(T key, V value)
{

}

template <typename T, typename V>
void HashTableImplUsingChaining<T, V>::show()
{
    LOG("show called");
}

template <typename T, typename V>
int HashTableImplUsingChaining<T, V>::clear()
{
	LOG("clear called");
}
template class HashTableImplUsingChaining<std::string, int>;