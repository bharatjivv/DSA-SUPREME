// reverse first k elements of queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void printQueue(queue<int> qt);

void reversekelements(queue<int> &q, int k) {
	int n = q.size();
	stack<int> s;
	int count = 0;

	if((k < 0) || (k > n)) {
		return ;
	}
	else {
		while(count != k) {
			int element = q.front();
			s.push(element);
			q.pop();
			count ++;
		}
		
        while(!s.empty()){
            int element = s.top();
            q.push(element);
            s.pop();
        }
        
        return ;
	}
}

void printQueue(queue<int> qt) {
	while(!qt.empty()) {
		cout << qt.front() << " ";
		qt.pop();
	}
	cout << endl;
}


int main() {
	// cout << "Working good " << endl;
	queue <int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	printQueue(q);
	reversekelements(q, 6);
    printQueue(q);    

	return 0;
}