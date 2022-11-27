#include<iostream>
using namespace std;


    /**
     * 每个部分排序
     */
     int partition(int[] nums, int low, int high){
        // 1. 取出枢纽（第一个元素）
        int base = nums[low];
        // 2. 两个指针 left，right
        int left = low, right = high;
        // 3. 扫描，要时刻注意left<right这个条件！
        while(left<right){
            // 从后开始扫描，找到第一个比base小的元素
            while (left<right && nums[right]>=base){
                right--;
            }
            //left<right这个条件一定要加上
            if(left<right){
                nums[left] = nums[right];
            }
            // 从前开始扫描，找到第一个比base大的元素
            while(left<right && nums[left]<=base){
                left++;
            }
            if(left<right){
                nums[right] = nums[left];
            }
        }
        // 4. left == right，把base放到这个位置
        nums[left] = base;
        // 5. 返回枢纽位置
        return left;
    }


    /**
     * 递归快速
     */
    void quickSort(int[] nums, int left, int right){
        // 1. 递归结束条件,特别注意！
        if (left>right){
            return;
        }
        // 2. 递归调用
        count++;
            // 先进行一趟排序，再对两部分进行排序
        int pos = partition(nums, left, right);
                //0 - pos-1
        quickSort(nums,left, pos-1);
                //pos+1 - right
        quickSort(nums,pos+1,right);
    }

    /**
    * 快速排序
    */
    quickSort(nums,0,nums.length-1);



