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

    node()
    {
        index = 0;
        int_value = 0;
        str_value = "";
        double_value = 0;
        float_value = 0;
        next_address = NULL;
    }

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
};

int main()
{
    return 0;
}
