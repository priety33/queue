#include <iostream>
#include <queue>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int k; cin>>k;
	    int start=0, end=0;
	    queue<pair<int,int>> q;
	    while(end<k)
	    {
	        if(a[end]<0) q.push(make_pair(end,a[end]));
	        end++;
	    }
	    end--;
	    int neg=(!q.empty())? q.front().second : 0;
	    while(end<n)
	    {
	        cout<<neg<<" ";
	        start++;
	        end++;
	        if(a[end]<0) q.push(make_pair(end,a[end]));
	        while(!q.empty() && q.front().first<start) q.pop();
	        neg=0;
	        if(!q.empty() && q.front().first<=end) neg=q.front().second;
	    }
	    cout<<endl;
	}
	return 0;
}
