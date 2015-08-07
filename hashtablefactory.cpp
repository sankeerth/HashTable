#include "hashtablefactory.h"
#include "hashtableimplusingchaining.h"

HashTableFactory::HashTableFactory()
	: m_hashImpl(HashImpl::Chaining)
{

}

template <typename T, typename V>
HashTableImplPtr<T, V> HashTableFactory::create()
{
	switch(m_hashImpl){
		case Chaining :
			return HashTableImplPtr<T, V>(new HashTableImplUsingChaining<T, V>);
	}
}
