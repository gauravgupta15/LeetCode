class Solution {
    public boolean wordPattern(String pattern, String s) {
        Map<Character,String>mpp = new HashMap<>();
        Map<String,Character>mpp2 = new HashMap<>();
        String st[] =  s.split(" ");
        if(pattern.length() != st.length) return false;
        for(int i=0; i<pattern.length(); i++) {
            if(mpp.containsKey(pattern.charAt(i))) {
                if(!st[i].equals(mpp.get(pattern.charAt(i)))) {
                    System.out.println(mpp.get(pattern.charAt(i)) + " : "+st[i]);
                    return false;
                }
            }
            else {
                if(mpp2.containsKey(st[i])) return false;
            }
                mpp.put(pattern.charAt(i), st[i]);
                mpp2.put(st[i], pattern.charAt(i));
        }
        return true;
    }
}