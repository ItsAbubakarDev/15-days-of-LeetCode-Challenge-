class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        s = s.replaceAll("[^a-zA-Z0-9]" , "");
        int l = s.length() -1;
        for(int i = 0 ; i< s.length()/2 ; i++){
            if(s.charAt(i) != s.charAt(l)){
                return false;
            }
            l--;
        }
        return true;
    }
}