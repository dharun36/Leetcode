class Solution {
    public int maxFreqSum(String s) {     
        HashMap<Character, Integer> vowel = new HashMap<Character, Integer>();    
        HashMap<Character , Integer> cons = new HashMap<Character, Integer>();

        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if("aeiou".indexOf(ch) != -1){
                vowel.put(ch, vowel.getOrDefault(ch, 0)+1);
            }
            else{
                cons.put(ch, cons.getOrDefault(ch, 0) + 1);
            }
            
        }
        int maxv = vowel.isEmpty()? 0 : Collections.max(vowel.values());
        
        int maxc = cons.isEmpty() ? 0 : Collections.max(cons.values());
        return maxv + maxc;

    }
}
