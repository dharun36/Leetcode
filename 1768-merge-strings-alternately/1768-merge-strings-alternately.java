class Solution {
    public String mergeAlternately(String word1, String word2) {
        int m = word1.length();
        int n = word2.length();

        int i = 0;

        StringBuilder result = new StringBuilder();

        while(i < m && i < n){
            result.append(word1.charAt(i));
            result.append(word2.charAt(i));
            i+=1;
        }

        if(m > n){
            result.append(word1.substring(i));
        } else{
            result.append(word2.substring(i));
        }

        return result.toString();
    }
}