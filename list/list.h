#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <cstddef>
#include <initializer_list>

namespace stu
{
template <class T>
struct list
{
private:
    struct Node
    {
        Node* next = nullptr;
        T m_value;
        Node() = default;
        Node(T value):m_value(value) {}
    };

    struct m_iterator
    {
        Node* m_current = nullptr;
        m_iterator() = default;
        m_iterator(Node* current):m_current(current){}

        operator bool()
        {
            return m_current != nullptr;
        }

        void operator++()
        {
            m_current = m_current->next;
        }

        auto& operator*()
        {
            return m_current->m_value;
        }

       bool operator==(const m_iterator& that)
       {
           return this->m_current == that.m_current;
       }

       bool operator !=(const m_iterator& that)
       {
          return this->m_current == that.m_current;
       }

    };

public:
    using value_type = T; // псевдонимы для типов данных
    using size_type = std::size_t; //
    using difference_type = std::ptrdiff_t;
    using reference = T&;
    using const_reference = const reference;
    using iterator = m_iterator;

public:
    Node* head = nullptr;
    size_type m_size = 0;


public:
    void push_back(value_type value)
    {
        Node* current = find_last();
        current->m_value = value;
        current->next = new Node();
        ++m_size;
    }

    iterator begin()
    {
        return iterator(head);
    }
    iterator end()
    {
        return iterator(find_last());
    }
    Node* find(iterator key)
    {
        for(auto i = begin(); i != end(); ++i)
        {
            if(i == key)
            {
                return i;
            }
        }
        return end();
    }

    iterator insert_after(const iterator pos, value_type value)
    {
        Node* temp = pos.m_current->next; // в темп закидываем след элемент
        pos.m_current->next = new Node(value) // грубо говоря в цепочку засунули новый элемент
        pos.m_current->next->next = temp;
    }
    list():head(new Node()) {} //конструктор без параметров
    list(std::initializer_list<value_type> l):list()// initializer list контейнер работал с фигурными скоюбками
    {
        for(typename std::initializer_list<value_type>::iterator i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }

private:
    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

    struct m_iterator
    {
        Node* m_current = nullptr;
        m_iterator() = default;
        m_iterator()
    };
public:

    // capacity
    bool empty()
    {
        return head->next == nullptr;
    }

    size_type size() const noexcept
    {
        return m_size;
    }
    size_type max_size() const noexcept;

};
}
#endif // LIST_H_INCLUDED
