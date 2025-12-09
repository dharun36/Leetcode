class Solution {
    public boolean isPalindrome(String s) {
        char[] arr = s.toCharArray();

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] += 32; 
            }
        }

        String str = "";
        for (char c : arr) {
            if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                str += c;
            }
        }

        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
}