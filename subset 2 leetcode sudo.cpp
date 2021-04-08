class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums ko sort karna jarurih
        pow(2,len(nums))
        1<<1=10
        1<<2=100
        for(x ,0->pow(2,len(nums))){
            for(j,0->len(nums)):
                if(x & 1<<j){
                    andar a raha h iska matlab tha jth bit is set toh
                    subset ke andar push karo the j th elem of num
                }
            
            if curr_suset not in ans:
                ans k andar dalo 
        }
        1 2 2
        4,4,4,4,1,4
        ans=[]
          x
        _____
           122
        0->000 []-ans=[[]]
        1->001 [2]-ans=[[],[2]]
        2->010 [2]
        3->011 [2,2]-ans=[[],[2],[2,2]]
        4->100 [1]-ans=[[],[2],[2,2],[1]]
        5->101 [1,2]-ans=[[],[2],[2,2],[1],[1,2]]
        6->110 [1,2]
        7->111 [1,2,2]-ans=[[],[2],[2,2],[1],[1,2],[1,2,2]]