// https://leetcode.com/problems/merge-intervals/

#include<iostream>
#include"../inc/solution.h"


void PrintIntervals(std::vector<std::vector<int>>&& vec)
{
	for(auto interval : vec)
	{
		std::cout << '[';
		for(int num : interval)
		{
			std::cout << num << ",";
		}
		std::cout << "]\n";
	}
}

int main()
{
	//std::vector<std::vector<int>> vec{{1,7}};
	//std::vector<std::vector<int>> vec{{1,4},{4,5}};
	std::vector<std::vector<int>> vec{{1,3},{2,6},{8,10},{15,18}};
	Solution sol;
	PrintIntervals( sol.merge(vec) );
	return 0;
}

