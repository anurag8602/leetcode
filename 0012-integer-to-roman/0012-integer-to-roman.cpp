class Solution {
public:
    string intToRoman(int num) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<string> ones = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        vector<string>  tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string>  hrns = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string>  ths={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};