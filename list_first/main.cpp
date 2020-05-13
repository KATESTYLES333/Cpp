#include <iostream>

struct List
{
    struct Node
    {
        int value;
        Node*next = nullptr;
        Node() = default;
        Node(int v):value(v) {};
    };

    Node*head = nullptr;
    void push_back(int value)
    {
        if(head == nullptr)
        {
            head = new Node(value);
        }
        else
        {
            Node*temp = find_last();
            temp->next= new Node(value);
        }
    }
    List() = default;
    List (std::initializer_list<int>l)
    {
        for (std::initializer_list<int>::iterator i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }
    Node*find_last()
    {
        Node*i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }
    void print_dbg()
    {
        for(Node*i = head; i != nullptr; i = i->next)
        {
            std::cout << i->value;
        }
    }
};

int main()
{
    return 0;
}
