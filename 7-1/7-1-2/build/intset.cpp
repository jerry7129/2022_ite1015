#include<vector>
#include<algorithm>
#include "intset.h"
IntegerSet::IntegerSet(){};
IntegerSet::~IntegerSet(){};
void IntegerSet::AddNumber(int num)
{
	if(find(numbers_.begin(), numbers_.end(), num)!=numbers_.end())return;
	numbers_.push_back(num);
};
void IntegerSet::DeleteNumber(int num)
{
	numbers_.erase(remove(numbers_.begin(), numbers_.end(), num), numbers_.end());
};
int IntegerSet::GetItem(int pos)
{
	if(numbers_.size() <= pos) return -1;
	return numbers_[pos];
};
std::vector<int> IntegerSet::GetAll()
{
	sort(numbers_.begin(), numbers_.end());
	return numbers_;
};
