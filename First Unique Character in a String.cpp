class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        queue<int>q;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
                m[s[i]]=1;
                q.push(i);
            }
            else m[s[i]]++;
        }
        while(!q.empty() && m[s[q.front()]]!=1) q.pop();
        return (q.empty()) ? -1 : q.front();
    }
};
