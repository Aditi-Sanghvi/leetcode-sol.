class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mpp;
        queue<int> q;

        for(int i=0;i<s.size();i++){
            if(mpp.count(s[i])==0){
                q.push(i);
            }
            mpp[s[i]]++;

            while(q.size()>0 && mpp[s[q.front()]]>1){
                q.pop();
            }
        }
        if( q.empty()) return -1;
        else return q.front();
    }
};