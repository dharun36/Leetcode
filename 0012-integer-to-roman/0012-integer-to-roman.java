class Solution {
    private static String[] Symbol = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    private static int[] value = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    public String intToRoman(int num) {

        String res = "";

        for(int i = 0;i<value.length && num>0;i++){
            while(value[i]<=num){
                num-=value[i];
                res+=Symbol[i];
            }
        }

        return res;
    }
}
