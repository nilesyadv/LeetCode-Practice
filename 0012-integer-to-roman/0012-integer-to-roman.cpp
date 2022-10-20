class Solution {
public:
    string intToRoman(int num) {
        string ans;
        while(true)
        {
            if(num == 0) break;
            if(num >= 1000)
            {
                int q = num/1000;
                for(int i = 1; i <= q; i++) ans += 'M';
                num = num % 1000;
            }
            else if(num >= 900)
            {
                int q = num/900;
                for(int i = 1; i <= q; i++) ans += "CM";
                num = num % 900;
            }
            else if(num >= 500)
            {
                int q = num/500;
                for(int i = 1; i <= q; i++) ans += 'D';
                num = num % 500;
            }
            else if(num >= 400)
            {
                int q = num/400;
                for(int i = 1; i <= q; i++) ans += "CD";
                num = num % 400;
            }
            else if(num >= 100)
            {
                int q = num/100;
                for(int i = 1; i <= q; i++) ans += 'C';
                num = num % 100;
            }
            else if(num >= 90)
            {
                int q = num/90;
                for(int i = 1; i <= q; i++) ans += "XC";
                num = num % 90;
            }
            else if(num >= 50)
            {
                int q = num/50;
                for(int i = 1; i <= q; i++) ans += 'L';
                num = num % 50;
            }
            else if(num >= 40)
            {
                int q = num/40;
                for(int i = 1; i <= q; i++) ans += "XL";
                num = num % 40;
            }
            else if(num >= 10)
            {
                int q = num/10;
                for(int i = 1; i <= q; i++) ans += 'X';
                num = num % 10;
            }
            else if(num >= 9)
            {
                int q = num/9;
                for(int i = 1; i <= q; i++) ans += "IX";
                num = num % 9;
            }
            else if(num >= 5)
            {
                int q = num/5;
                for(int i = 1; i <= q; i++) ans += 'V';
                num = num % 5;
            }
            else if(num >= 4)
            {
                int q = num/4;
                for(int i = 1; i <= q; i++) ans += "IV";
                num = num % 4;
            }
            else if(num >= 1)
            {
                int q = num/1;
                for(int i = 1; i <= q; i++) ans += 'I';
                num = num % 1;
            }
        }
        return ans;
    }
};