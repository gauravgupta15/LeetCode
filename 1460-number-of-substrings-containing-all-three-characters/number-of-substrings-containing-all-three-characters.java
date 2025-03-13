class Solution {
    public int numberOfSubstrings(String s) {
        Map<Character,Integer>mpp = new HashMap<>();
        int i = 0,count = 0;
        for(int j=0; j<s.length(); j++) {
            // caculation
            char ch = s.charAt(j);
            mpp.put(ch, mpp.getOrDefault(ch,0)+1);
            while(mpp.size() == 3) {
                // find the answer
                count+=(s.length() - j);
                // shrink the window
                
                char chI = s.charAt(i);
                mpp.put(chI,mpp.getOrDefault(chI,0)-1);
                if(mpp.get(chI) == 0) mpp.remove(chI);
                i++;
            }
        }
        return count;
    }
}