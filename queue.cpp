#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;


int main() {
queue<int>q;
q.push(1);
q.push(2);
q.push(3);
cout << "front of queue: " << q.front() << endl;
cout << "back of queue: " << q.back() << endl;
cout << "printing queue: " << endl;
while(!q.empty()) {
    cout << q.front() << " ";
    q.pop();
};
cout << endl;

	return 0;
}