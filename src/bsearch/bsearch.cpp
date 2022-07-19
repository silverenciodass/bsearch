#include "./bsearch.hpp"

BSearch::BSearch(){}
BSearch::~BSearch(){}

std::vector<int> BSearch::get_array() 
{
    return this->array;
}

void BSearch::set_array(std::vector<int> array) 
{
    this->array = array;
}

void BSearch::add_item(int value)
{
    this->array.push_back(value);
}

int BSearch::get_operations() 
{
    return this->operations;
}   

void BSearch::set_operations(int operations) 
{
    this->operations = operations;
}
