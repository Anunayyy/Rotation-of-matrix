class Solution {
public:
    
   
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // first we swap the column
        for(int i=0;i<n;i++){
            int left=0;
            int right=n-1;
            
            while(left<right){
                swap(matrix[i][left],matrix[i][right]);
                ++left;
                --right;
                    
            }
            
        }
        
        //now we swap the rows
        for(int i=0;i<n;i++){
            int left=0;
            int right=n-1;
            
            while(left<right){
                swap(matrix[left][i],matrix[right][i]);
                ++left;
                --right;
                    
            }
            
        }
        
        
        
    }
};
