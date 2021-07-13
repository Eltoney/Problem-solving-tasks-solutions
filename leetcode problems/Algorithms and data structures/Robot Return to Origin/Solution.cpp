class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0 , y = 0;
        int length  = moves.size();
        for(int i = 0 ; i < length ;i++){
            if(moves[i] == 'L')
                x++;
            else if(moves[i] == 'R')
                x--;
            else if(moves[i] == 'U')
                y++;
            else
                y--;
        }
        
        return (x == 0 && y == 0);
    }
};
