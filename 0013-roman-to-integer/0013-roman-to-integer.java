class Solution {

    public int rtoN(char c){
        if(c=='I'){
            return 1;
        }
        else if(c=='V'){
            return 5;
        }
        else if(c=='X'){
            return 10;
        }
        else if(c=='L'){
            return 50;
        }
        else if(c=='C'){
            return 100;
        }
        else if(c=='D'){
            return 500;
        }
        else if(c=='M'){
            return 1000;
        }
        else return 0;
    }

    public int romanToInt(String s) {
        int res = 0;
        for(int i = 0;i<s.length();i++){
            int val = 0;
            int num = rtoN(s.charAt(i));
            int num2 = 0;

            if(i+1<s.length())num2 = rtoN(s.charAt(i+1));
            if(num2  > num){val = num2-num; i++;}
            else val = num;
            res+=val;
        }

        return res;
    }
}