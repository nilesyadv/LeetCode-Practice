class Solution {
public:
    string breakPalindrome(string palindrome) {
        bool flag = false;
        int n = palindrome.size();
        if(n % 2 == 0)
        {
            for(int i = 0; i < n; i++)
            {
                if(palindrome[i] > 'a')
                {
                    palindrome[i] = 'a';
                    flag = true;
                    break;
                }
                else if(i == n-1)
                {
                    palindrome[i] += 1;
                    flag = true;
                    break;
                }
            }
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(i != n/2)
                {
                    //cout<<i<<" "<<n/2<<endl;
                    if(palindrome[i] > 'a')
                    {
                        palindrome[i] = 'a';
                        flag = true;
                        break;
                    }
                    else if(i == n-1)
                    {
                        palindrome[i] += 1;
                        flag = true;
                        break;
                    }
                }
            }
        }
        
        if(flag) return palindrome;
        else return "";
    }
};