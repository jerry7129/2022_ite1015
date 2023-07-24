#include<vector>
#include<map>
#include<string>
#include "message.h"

MessageBook::MessageBook(){};
MessageBook::~MessageBook(){};
void MessageBook::AddMessage(int number, const std::string& message)
{
	messages_.erase(number);
	messages_.insert({number, message});
};
void MessageBook::DeleteMessage(int number)
{
	messages_.erase(number);
};
std::vector<int> MessageBook::GetNumbers()
{
	std::vector<int> v;
	for(auto iter=messages_.begin(); iter!=messages_.end(); iter++){
		v.push_back(iter->first);
	}
	return v;
};
const std::string& MessageBook::GetMessage(int number)
{
	return messages_.find(number)->second;
};
