class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size(); 
        int si=0,sj=0,ei=matrix.size()-1,ej=matrix[0].size()-1;
         int midi=si+(ei-si)/2,midj=sj+(ej-sj)/2;
         int s=m*si+(sj+1),e=m*ei+(ej+1);
         //cout<<s<<" "<<e<<endl;
          int mid=s+(e-s)/2;
          //int t=mid;
          if(mid%m==0)
          {
              midi=mid/m-1;
              midj=m-1;
          }
          else
          {
              midi=mid/m;
              midj=mid%m-1;
          }
        //cout<<midi<<" "<<midj<<endl;
        while(s<=e)
        {
            //cout<<matrix[midi][midj]<<" ";
            if(matrix[midi][midj]==target) return true;
            if(matrix[midi][midj]>target)
            {
                // if(midj>0)
                // {
                //     ej=midj-1;
                //     ei=midi;
                // }
                // else
                // {
                //     ei=midi-1;
                //     ej=matrix[0].size()-1;
                // }
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            // midi=si+(ei-si)/2;
            // midj=sj+(ej-sj)/2;
          mid=s+(e-s)/2;
          if(mid%m==0)
          {
              midi=mid/m-1;
              midj=m-1;
          }
          else
          {
              midi=mid/m;
              midj=mid%m-1;
          }
            
        }
        return false;
    }
};