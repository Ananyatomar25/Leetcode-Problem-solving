class Solution {
public:
    bool isRobotBounded(string instructions) {
        char curr_direction ='N';
        int x =0,y=0;
        
        for(int i=0;i<instructions.length();i++){
            if(instructions[i] == 'G'){
                y+=curr_direction=='N'?1:0;
                y+=curr_direction=='S'?-1:0;
                x+=curr_direction=='W'?-1:0;
                x+=curr_direction=='E'?1:0;
            }
            else{
                char incoming = instructions[i];
                if(curr_direction == 'N'){
                    curr_direction =incoming=='L'?'W':'E';
                }
                else if(curr_direction == 'S'){
                    curr_direction =incoming=='L'?'E':'W';
                }
                else if(curr_direction == 'E'){
                    curr_direction =incoming=='L'?'N':'S';
                }
                else if(curr_direction == 'W'){
                    curr_direction =incoming=='L'?'S':'N';
                }
                
            }
            
        }
        
        if((x==0 && y==0) || curr_direction!='N') return true;
        return false;
    }
};