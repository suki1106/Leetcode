class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {        
        vector<int> left(arr.size());
        vector<int> right(arr.size());      
        stack<int> s1,s2;        
        int ans=0;
        
        for(int i = 0 ; i < left.size();i++)left[i]=i+1;
        for(int i = 0 ; i < right.size();i++)right[i]=right.size()-i;
        
        for(int i = 0;i<arr.size();i++){
            while(!s1.empty() && arr[s1.top()] > arr[i]){
                s1.pop();
            }   
            
            if(!s1.empty())
                left[i] = i-s1.top();
            
            
            s1.push(i);          
            
        }
        
        
        for(int i = 0;i<arr.size();i++){
            while(!s2.empty()&&arr[s2.top()]>arr[i]){  
                right[s2.top()] = i-s2.top();
                s2.pop();
            }
            s2.push(i);
        }      
        
        int m = 1e9+7;
        
        for(int i = 0 ; i <arr.size();i++)
            ans= (ans+ static_cast<long>(left[i])*right[i]*(long long)arr[i])%m;
        
        
        return ans;
    }
};