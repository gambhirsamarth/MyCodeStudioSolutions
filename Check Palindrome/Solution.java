public class Solution {

    public static Boolean isPalindromeHelper(int l, int r , String s){
        if(l>=r) return true;
        if(s.charAt(l)!=s.charAt(r)) return false;
        return isPalindromeHelper(l+1, r-1, s);
    }

    public static Boolean isPalindrome(String s) {
        return isPalindromeHelper(0, s.length()-1, s);
    }

}
