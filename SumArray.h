#pragma once
#include <vector>

class SumArray
{
private:
    int size{ 100 };                   
    int num_threads{ 5 };            
    std::vector<int>values;     
    int result{ 0 };
    void calc_sum_part(int l_index, int r_index, int index);
public:
    SumArray(int _size, int _num_threads);       
    ~SumArray();
    int calculate_using_threads();                  
    int calculate_without_threads();                                         
};