class Solution {
public:
    long long sumAndMultiply(int n) {
        string s =to_string(n);
        long long x=0,sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                int d=s[i]-'0';
                sum+=d;
                if(d>0) x=x*10+d;
            } 
        }
        
        return x*sum;
    }
};