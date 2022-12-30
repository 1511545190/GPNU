/**在3个数组中至少出现两次的元素重新组成一个数组(哈希（位运算）表)
 * Note: The returned array must be malloced, assume caller calls free().
 */
  int maxofthree(int a, int b, int c)
 {
	 return a>b?a>c?a:c:b>c?b:c;
 }
 #define N 100+1
int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize){
    //哈希表解法，用进制位来表示状态
    int *ret = (int*)malloc(sizeof(int)*N);

    //设置map并初始化
    int map[N];
    memset(map,0,sizeof(map));
    //开始3个循环操作
    for(int i = 0;i<nums1Size;i++)
    {
        map[nums1[i]]=1;//map index 为值，存状态
    }
    for(int i=0;i<nums2Size;i++)
    {
        map[nums2[i]] |= 2;//打开第二位
    }
    for(int j = 0;j<nums3Size;j++)
    {
        map[nums3[j]] |=4;//打开第3位
    }

    int index = 0;
    for(int i=0;i<N;i++)
    {
        //若只有1个2进制位，其&（原数-1）必为0
        if(map[i]&(map[i]-1)){
            ret[index]=i;//特别注意，index才为值
            index++;
        }
    }
    *returnSize = index;

    return ret;

}
