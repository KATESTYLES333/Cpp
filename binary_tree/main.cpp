#include <iostream>

namespace stu
{
struct Set
{
    struct Node
    {
        Node* left = nullptr;
        Node* right = nullptr;
        int m_value;
        Node() = default;
        Node(int value):m_value(value) {}
    };

    Node* head = nullptr;
    Set() = default;

    Node* add(Node* node, int value)
    {
        if(node == nullptr)
        {
            return new Node(value);
        }
        if(value > node->m_value)
        {
            node->right = add(node->right, value);
        }
        if(value < node->m_value)
        {
            node->left = add(node->left, value);
        }
        return node;
    }

    void insert(int value)
    {
        head = add(head, value);
    }

    void print(Node* node)
    {
        if(node != nullptr)
        {
            print(node->left);
            std::cout << node->m_value << std::endl;
            print(node->right);
        }
    }

    void print_all()
    {
        print(head);
    }


    Node* search(Node* node, int value)
    {
        if(node == nullptr || node->m_value == value)
        {
            return node;
        }
        if(node->m_value < value)
        {
            return search(node->left, value);
        }
    }

};
}

int main()
{
    stu::Set a;
    a.insert(8);
    a.insert(16);
    a.insert(22);
    a.insert(1);
    a.insert(9);
    a.insert(15);
    a.insert(25);
    a.insert(0);
    for(auto i = a.head; i != nullptr; i = i->left)
    {
        std::cout << i->m_value << " ";
    }

    return 0;
}
