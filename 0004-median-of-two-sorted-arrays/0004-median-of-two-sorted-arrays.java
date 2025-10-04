class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] arr=new int[nums1.length+nums2.length];
        for(int i=0;i<nums1.length;i++){
            arr[i]=nums1[i];
        }
        for(int i=0;i<nums2.length;i++){
            arr[i+nums1.length]=nums2[i];

        }
        Arrays.sort(arr);
        double med;
        if(arr.length%2==0){
            med=(arr[arr.length/2]+arr[(arr.length/2)-1])/2.0;
        }
        else{
            med=arr[arr.length/2];
        }
        return med;
    }
}