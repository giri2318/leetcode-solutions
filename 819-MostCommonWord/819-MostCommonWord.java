// Last updated: 9/10/2026, 11:27:45 AM
1class Solution {
2    public String mostCommonWord(String pa, String[] banned) {
3        HashSet<String> ban = new HashSet<>();
4
5       // String [] words = pa.split("[//. ,!]");
6        for(String word : banned){
7            ban.add(word.toLowerCase());
8        }
9
10        Map <String, Integer> freq = new HashMap<>();
11
12        String[] words = pa.toLowerCase().split("[^a-z]+");
13        String ans = "";
14
15        int max = 0;
16
17        for(String word: words){
18            if(ban.contains(word)||word.length() == 0){
19                continue;
20            }
21            int c = freq.getOrDefault(word,0)+1;
22            freq.put(word, c);
23
24            if (c > max){
25                max = c;
26                ans = word;
27            }
28        }
29
30    return ans;
31    }
32}