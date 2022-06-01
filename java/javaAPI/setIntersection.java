class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Integer[] numsA = Arrays.stream(nums1).boxed().toArray(Integer[]::new);
        Integer[] numsB = Arrays.stream(nums2).boxed().toArray(Integer[]::new);
        
        Set<Integer> a = new HashSet<>(Arrays.asList(numsA));
        Set<Integer> b = new HashSet<>(Arrays.asList(numsB));
        
        
        a.retainAll(b);
        int[] res = a.stream().mapToInt(Integer::intValue).toArray();
 
        return res;
    }
}
