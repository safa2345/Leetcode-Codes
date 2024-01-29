//https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        char j,m;
        for(char c:jewels){
            for(char p:stones){

               if(p==c){

                cnt++;
                
                }
            }
            
        }
        return cnt;
    }
};