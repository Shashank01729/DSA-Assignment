class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size(),sum1=garbage[0].size(),sum2=0,g=0,p=0,m=0;
        for(int i=1;i<n;i++){
            sum2+=travel[i-1];
            for(char c : garbage[i]){
                if(c=='G'){
                    g=sum2;    
                }
                else if(c=='M'){
                    m=sum2;
                }
                else if(c=='P'){
                    p=sum2; 
                }
                sum1++;
            }  
        }
        sum1+=p+g+m;
        return sum1;
    }
};