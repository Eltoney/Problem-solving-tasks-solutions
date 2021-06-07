class Solution {
    
    const int MOD = 1e9 + 7;
    
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> eng;
        
        for(int i = 0 ; i < n ; i++){
            eng.push_back({efficiency[i] , speed[i]});
        }
        
        sort(eng.begin() , eng.end());
    
        priority_queue<int> pq;
        
         long long  cc = k;
         long long  curSum = 0;
         long long  best = 0;
         long long  i = speed.size() - 1;
        for( ; cc ; i-- , cc--){
             long long  sp = eng[i].second;
             curSum = (curSum + (long long) sp);
             best = max((long long)best , (eng[i].first *(long long)curSum));
             pq.push(-1 * sp);
        }
        
        //best = (eng[i + 1].first * (long long)curSum)%MOD;
        for( i = n - 1; i >= 0 ; i--){
            long long  del = pq.top();
            pq.pop();
            curSum = (curSum + (long long) del);
             long long  sp = eng[i].second;
            curSum = (curSum + (long long) sp);
            pq.push(-1 * sp);
             best = max((long long)best , (eng[i].first *(long long)curSum));
        }
        return best % MOD;
    }
};
