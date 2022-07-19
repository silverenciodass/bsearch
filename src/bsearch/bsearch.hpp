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
        
        std::vector<int> get_array() {
	        return this->array;
        }
        
        void set_array(std::vector<int> array) {
	        this->array = array;
        }
        
        int get_operations() {
	        return this->operations;
        }   
        
        void set_operations(int operations) {
	        this->operations = operations;
        }
        
};


#endif // BSEARCH
