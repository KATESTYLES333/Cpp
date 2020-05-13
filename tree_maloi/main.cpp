#include <iostream>

struct Dtree
{
    struct Node
    {
        std::string m_question;
        Node* m_left = nullptr;
        Node* m_right = nullptr;
        Node() = default;
        Node(std::string question):m_question(question){}
    };
    Dtree() = default;
    Node* head = nullptr;
    void add_node_left(Node*node, std::string text)
    {
        node->m_left = new Node(text);
    }
    void add_node_right(Node*node, std::string text)
    {
        node->m_right = new Node(text);
    }
};


int main()
{
    return 0;
}
