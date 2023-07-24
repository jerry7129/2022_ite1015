#include<vector>
#include<algorithm>
#include "sorted.h"
using namespace std;

SortedArray::SortedArray(){};
SortedArray::~SortedArray(){};
void SortedArray::AddNumber(int num)
{
	numbers_.push_back(num);
};
vector<int> SortedArray::GetSortedAscending()
{ 
	sort(numbers_.begin(), numbers_.end());
	return numbers_;
};
vector<int> SortedArray::GetSortedDescending()
{
	sort(numbers_.rbegin(), numbers_.rend());
	return numbers_;
};
int SortedArray::GetMax()
{
	return *max_element(numbers_.begin(), numbers_.end());
};
int SortedArray::GetMin()
{
	return *min_element(numbers_.begin(), numbers_.end());
};
