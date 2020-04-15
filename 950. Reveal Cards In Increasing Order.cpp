class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        
        deque<int> q;
        for(int i=0;i<n;i++) q.push_back(i);
        
        vector<int> ans(n, 0);
        sort(deck.begin(), deck.end());
        for(int i=0; i<n; i++)
        {
            ans[q.front()]=deck[i];
            q.pop_front();
            q.push_back(q.front());
            q.pop_front();
        }
        return ans;
    }
};
