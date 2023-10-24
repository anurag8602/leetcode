class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hund[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thous[]={"","M","MM","MMM"};

        string ans="";
        ans+=thous[num/1000];
        num=num%1000;
        ans+=hund[num/100];
        num=num%100;
        ans+=tens[num/10];
        num=num%10;
        ans+=ones[num];
        return ans;

    }
};