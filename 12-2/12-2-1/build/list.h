#include<iostream>
using namespace std;
template <class T>
class Node
{
	public:
		T data;
		Node<T>* next;
};

template <class T>
class List {
private:
    Node<T> *head;
public:
   List() : head(NULL) {};
   ~List(){
		Node<T> *ptr = head->next;
		while(ptr != NULL){
			Node<T> *temp = ptr->next;
			delete ptr;
			ptr = temp;
		}
	}//free resources
   List(T* arr, int n_nodes){//create a list with n_nodes
		head = CreateNode(arr[0]);
		for(int i=0; i<n_nodes; i++){
			Node<T> *node = CreateNode(arr[i]);
			if(i==0){
				head->next = node;
				continue;
			}
			Node<T> *ptr = head->next;
			while(ptr->next != NULL){
				ptr = ptr->next;
			}
			ptr->next = node;
		}
	}
	Node<T>* CreateNode(const T& data){
		Node<T> *node = new Node<T>();
		node->data = data;
		node->next = NULL;
		return node;
	}
	void insert_at(int idx, const T& data){
		Node<T> *node = CreateNode(data);
		Node<T> *ptr = head;
		for(int i=0; i<idx; i++){
			if(ptr->next == NULL)return;
			ptr = ptr->next;
		}
		node->next = ptr->next;
		ptr->next = node;
	}
   void remove_at(int idx){
		Node<T> *ptr = head;
		for(int i=0; i<idx; i++){
			if(ptr->next == NULL)return;
			ptr = ptr->next;
		}
		Node<T> *temp = ptr->next;
		ptr->next = ptr->next->next;
		delete temp;
	}
   void pop_back(){
		if(head->next == NULL)return;
		Node<T> *ptr = head;
		while(ptr->next->next != NULL){
			ptr = ptr->next;
		}
		Node<T> *temp = ptr->next;
		ptr->next = ptr->next->next;
		delete temp;
	}
   void push_back(const T& val){
		Node<T> *node = CreateNode(val);
		Node<T> *ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = node;
	}
   void pop_front(){
		Node<T> *temp = head->next;
		head->next = head->next->next;
		delete temp;
	}
   void push_front(const T& val){
		Node<T> *node = CreateNode(val);
		node->next = head->next;
		head->next = node;
	}
	template<class U>
   friend ostream& operator<<(ostream& out, List<U>& rhs);//print out nodes
};
template<class U>
ostream& operator<<(ostream& out, List<U>& rhs){
	Node<U> *ptr = rhs.head;
	while(ptr->next != NULL){
		ptr = ptr->next;
		out << ptr->data;
		if(ptr->next != NULL)out<<',';
	}
	return out;
}//print out nodes
