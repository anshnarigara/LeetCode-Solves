int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0){
        return 0;
    }

    int lastele = 0, cur = 1, nUnique = 1;

    while(cur < numsSize){
        if(nums[cur] == nums[lastele]){
            cur++;
        } else {
            nums[++lastele] = nums[cur];
            nUnique++;
            cur++;
        }
    }
    printf("\n%d\n", cur);
    for(int i = cur; i < numsSize; i++){
        nums[i] = 0;
    }

    return nUnique;
}