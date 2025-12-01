class Solution {
    public String mergeAlternately(String word1, String word2) {
        String res="";
        int i = 0;
        for(i = 0;i<word1.length() && i<word2.length();i++){
            res+=word1.charAt(i);
            res+=word2.charAt(i);
        }
        String word;

        if(i<word1.length())word  = word1;
        else word= word2;

        for( ;i<word.length();i++){
            res+=word.charAt(i);
        }

        return res;
    }
}