int removeDuplicates(int* nums, int numsSize) {

    //it returns the 0 when the given array has 0 elements.
    if(numsSize == 0) return 0;
    

    int k = 0;

    //runing loop for all the elements of array.
    for(int i = 0; i<numsSize; i++){

        //if the iterated element has differ then last changed element so place that element to next of the previus, else if current element is equal to the last changed then skip itaration.
        if(nums[i] != nums[k]){
            nums[++k] = nums[i];
        }
    } 
    
    //if we return k so the last element will be coudnt print, so that i returned k + 1.
    //The Time Complexity of the program is: O(n).
    return k+1;
}