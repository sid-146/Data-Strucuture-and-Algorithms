/*
    This Program is written by Sudhanwa Kaveeshwar
    gitHub: https://github.com/sid-146
*/

#include <iostream>

using namespace std;

class node
{
public:
    int index;
    int int_value;
    string str_value;
    double double_value;
    float float_value;
    node *next_address;

    // usef when prepending or first node
    node()
    {
        index = 0;
        int_value = 0;
        str_value = "";
        double_value = 0;
        float_value = 0;
        next_address = NULL;
    }

    // used for inserting and appending node
    node(int index_ip, int int_value_ip, string str_value_ip, double double_value_ip, float float_value_ip)
    {
        index = index_ip;
        int_value = int_value_ip;
        str_value = str_value_ip;
        double_value = double_value_ip;
        float_value = float_value_ip;
        // next_address = NULL;
    }
};

class Linked_list
{
    node *start_head;

    bool is_node_present(int index_ip)
    {
        // node *temp_holder = NULL;
        node *traverser = start_head;

        while(traverser != NULL)
        {
            if(traverser->index == index_ip)
            {
                return true;
            }
            traverser = traverser->next_address;
        }
        // return temp_holder;
        return false;
    }

    Linked_list()
    {
        start_head = NULL;
    }

    Linked_list(node *index)
    {
        start_head = index;
    }

public:
    bool update_node()
    {
        return true;
    }

    bool append()
    {
        return true;
    }

    bool insert()
    {
        return true;
    }

    bool insert()
    {
        return true;
    }

    void print()
    {

    }

    
};

int main()
{
    return 0;
}
