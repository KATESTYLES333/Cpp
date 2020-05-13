#include <iostream>

template <class T>
struct forward_list
{
    using value_type = T;
    using size_type = std::size_t; // 0...1000
    using difference_type = std::ptrdiff_t; // v 2 raza bolshe size_type // -1000...1000
    struct Node
    {
        Node* next = nullptr;
        T value;
        Node () = default;
        Node (T v, Node* n = nullptr): value(v), next(n) {}
    };

    Node* head = nullptr;
    size_type m_size = 0;
    size_type = m_size;
    forward_list():head(new Node()) {}
    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

    void push_back(value_type value)
    {
        Node* temp = find_last();
        temp->next = new Node(value);
        ++ m_size;
    }
    forward_list(std::initializer_list<value_type> l)
    {
        for(typename std::initializer_list<value_type>::iterator i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }
    struct iterator
    {
        Node* m_current = nullptr;
        iterator() = default;
        iterator(Node* current):m_current(current) {}
        operator bool()
        {
            return m_current != nullptr;
        }
        auto& operator*()
        {
            return m_current->m_value;
        }
        auto operator++()
        {
            return m_value = m_value->next;
        }
        bool operator==(const iterator& that)
        {
            return this->m_current == that.m_current;
        }
        bool operator!=(const iterator& that)
        {
            return this->m_current != that.m_current;
        }

        iterator before_begin()
        {
            return iterator(head);
        }

        iterator end()
        {
            return iterator(find_last());
        }

        iterator begin()
        {
            return iterator(head->next);
        }
    };

    size_type max_size()
    {
        size_type temp = 0;
        return temp -1;// возвращ самое большое число
    }

   size_type size()
   {
       return m_size;
   }

    bool empty()
    {
        return head->next == nullptr;
    }

    Node* find(iterator key)
    {
        for(auto i = begin(); i != end(); ++i)
        {
            if(i == key)
            {
                return i;
            }
            return end();
        }
    }
    iterator insert_after(Node* pos, T value)
    {
        Node* temp = pos->next;
        pos->next = new Node(value);
        pos->next->next = temp;
    }
    iterator insert_after1(const iterator pos, value_type value) //insert after через итератор
    {
        Node* temp = pos.m_current->next;
        pos.m_current->next = new Node(value);
        pos.m_current->next->next = temp;
    }
};
int main()
{
    std::vector<int> a;
    std::vector<int> b;
    std::forward_list<int> c;
    for(auto i = a.begin(); i = a.end(); ++i)
    std::size_t a = 0;
    std::size_t b =0;
    std::cout << (a - 1);
    std::cout <<(b - 1);
    return 0;
}
