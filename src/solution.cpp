#include<algorithm>
#include"../inc/solution.h"


std::vector<std::vector<int>> Solution::merge(std::vector<std::vector<int>>& intervals)
{
    auto it1 = intervals.begin(), it2 = it1 + 1;
    while(it2 < intervals.end())
    {
        if( (*it1)[0] <= (*it2)[1] && (*it1)[1] >= (*it2)[0] )  // if there is an overlap between successive intervals
        {
            (*it2)[0] = std::min( (*it1)[0], (*it2)[0] );  // overwrite elements of the second interval with min/max of the pair
            (*it2)[1] = std::max( (*it1)[1], (*it2)[1] );
            intervals.erase(intervals.begin());  // remove the redundant first interval
        }
        ++it1; ++it2;  // shift iterators forward to compare the next pair of intervals
    }
    return intervals;
} 