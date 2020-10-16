#include <iostream>

struct Citizen {
	std::string name;
	bool is_knight;
};

struct Node {
	Citizen* data;
	Node* next;
};

class LinkedList {

	private: 
		Node* head;
		Node* tail;
	public:
		LinkedList() {
			head = NULL;
			tail = NULL;
		}

		Node* get_head() {
			return head;
		}	
		
		Node* get_tail() {
			return tail;
		}



		void add_node(Citizen* cit) {
			Node* tmp = new Node;
			tmp->data = cit;
			tmp->next = NULL;

			if(head == NULL) {
				head = tmp;
				tail = tmp;
			} else {
				tail->next = tmp;
				tail = tmp;
				tail->next = head;
			}
		}

		~LinkedList() {
			delete(head);
			delete(tail);
		}
};

int main() {
	
	int n;
	bool is_truth;	
	std::cin >> n >> is_truth;
	
	LinkedList list;
	
	std::string name;
        bool is_knight;

	Citizen* cit;
	for(int i = 0; i < n; i++) {
		cit = new Citizen;
		std::cin >> cit->name >> cit->is_knight;
		list.add_node(cit);
	}

	int days;
	std::cin >> days;
	
	std::cout << days << std::endl;

	Node* node = list.get_head();
	Node* prev = list.get_tail();

	while(days > 0 && node->next != node) {
		
		if (is_truth) {
                
			if (node->data->is_knight) {
                    		prev = node;
                    		node = node->next;
                	} else {
                    		is_truth = false;
                    		prev = node;
                    		node = node->next;
                	}

            	} else {

                	if (node->data->is_knight) {
                	    	prev->next = node->next;
                    		node = node->next;
                	} else {
                    		node->data->is_knight = true;
                    		prev = node;
                    		node = node->next;
                	}
            	}	
		days--;
	}

	do {
		std::cout << node->data->name << " " << node->data->is_knight << std::endl;
		
	} while (node != node->next);

	delete(cit);
	return 0;
}
