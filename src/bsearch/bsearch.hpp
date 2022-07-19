#ifndef   BSEARCH
#define   BSEARCH

#include <iostream>
#include <vector>

class BSearch
{
    private:
        std::vector<int> array;
        int operations;

    public:

        BSearch();
        ~BSearch();

        std::vector<int> get_array();
        void set_array(std::vector<int>);

        void add_item(int);
        
        void set_operations(int);
        int BSearch::get_operations();
        

        
};


#endif // BSEARCH
