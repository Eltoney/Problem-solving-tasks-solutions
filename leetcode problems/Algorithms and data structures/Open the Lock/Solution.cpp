class Solution {
public:
    map<string , int> dis;
    map<string , bool> bad;
    int openLock(vector<string>& deadends, string target) {
        
        
        
        for(int i = 0 ; i < deadends.size(); i++){
            bad[deadends[i]] = 1;
        }
        
        queue <string> q;
        q.push("0000");
        dis["0000"] = 1;
        if(bad["0000"])
            return -1;
        
        
        while(!q.empty()){
            string cur = q.front();
            q.pop();
            //cout<<cur<<endl;
            if(cur == target){
                break;
            }
            
            for(int i = 0 ; i < 4 ; i++){
                int num = cur[i] - '0';
                string child1 = cur , child2 = cur;
                
                if(num == 0){
                    child1[i] = '1';
                    child2[i] = '9';
                }else if(num == 9){
                    child1[i] = '0';
                    child2[i] = '8';
                }else{
                    //cout<<cur<<" "<<num<<" "<<num - 1 <<" " <<num + 1<<endl;
                    // cout<<cur<<" "<<num - 1<<endl;
                    child1[i] = char(num + 1 + '0');
                    child2[i] = char(num - 1 + '0');
                }
                
                if(!dis[child1] && !bad[child1]){
                    dis[child1] = dis[cur] + 1;
                    q.push(child1);
                }
                if(!dis[child2] && !bad[child2]){
                    dis[child2] = dis[cur] + 1;
                    q.push(child2);
                }
            }
        }
        return (dis[target] ? dis[target] - 1 : -1);
    }
};
