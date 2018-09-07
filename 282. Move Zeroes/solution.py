#!python3

## 0.新建一个非零数组，然后赋值给原来的数组，后面补零
class Solution:
    def moveZeroes(self, arr):
        """
        :type arr: List[int]
        """				
        nonzeroes_arr = []
        for i in range(len(arr)):
                if arr[i] != 0:
                    nonzeroes_arr.append(arr[i])
        for i in range(len(nonzeroes_arr)):
            arr[i] = nonzeroes_arr[i]
        for i in range(len(nonzeroes_arr), len(arr)):
            arr[i] = 0
        return arr

## 1.先判断有几个零，每个零可以由两两和非零交换，向后传递，最终到达末尾。 但是python提交超时了。。。     
class Solution:
    def moveZeroes(self, arr):
        numofzeros = 0 
        for i in range(arr.count(0)):
            for j in range(len(arr)-1):
                if arr[j] == 0:
                    numofzeros += 1
                    arr[j], arr[j+1] = arr[j+1], arr[j]
        return arr    
        
        
if __name__ == "__main__":
    arr = [0,1,0,3,12]
    assert (Solution().moveZeroes(arr) == [1, 3, 12, 0, 0])
