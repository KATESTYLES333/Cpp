#include <iostream>
#include <vector>
#include <algorithm>

struct Variant
{
    std::string m_text;
    bool is_true;
    bool is_choisen = false;
    Variant() = default;
    Variant(std::string s, bool v):m_text(s), is_true(v) {}
};

struct Question
{
    std::string Text;
    bool is_choisen = false;
    std::vector <Variant> variants;
    Question() = default;
    Question(std::string t):Text(t) {};

    void add_variant(const Variant& v)
    {
        variants.push_back(v);
    }

    void add_variant(Variant&& v)
    {
        variants.push_back(v);
    }

    std::vector <Variant> choisen_variants;

    bool choisen_answer(int index)
    {
        return variants[index].is_choisen = true;
    }

    bool is_right_answer()
    {
        for(auto i = variants.begin(); i != variants.end(); ++i)
        {
            if (i->is_true != is_choisen)
            {
                return false;
            }
        }
    }
};

struct Quiz
{
    std::vector <Question> questions;
    std::vector <Question>::iterator get_question;
};


int main()
{
    return 0;
}
