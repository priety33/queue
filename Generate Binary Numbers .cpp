#include <iostream>
#include <queue>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    queue<int> q;
	    q.push(1);
	    while(n--)
	    {
	        cout<<q.front()<<" ";
	        q.push(q.front()*10);
	        q.push(q.front()*10+1);
	        q.pop();
	    }
	    cout<<endl;
	}
	return 0;
}
