/*
This is a "problem of the day" of brain_game problem on 7th July,2022 on GeeksForGeeks
here is the link -> https://practice.geeksforgeeks.org/problems/brain-game1742/1
*/



class Solution{
	public:
	bool isPrime(int x){
    if(x==0) return false;
    if(x==2)return true;
    int div=2;
    while(div<abs(x)){
        if(x%div==0)return false;
        div++;
    }
    return true;
}
int getFactor(int n){
    n=abs(n);
    int div;
    if(n==0)return 2;
    if(n%2==0)return n/2;
    else{
        div=3;
        while(n%div!=0){
            div+=3;
        }
    }
    return n/div;
}

//main code
bool brainGame(vector<int>nums) {
        vector<int>numcp,v_idx;
          static int n=nums.size();

        // eleminating prime elements
        for (int i=0;i<n;i++)
        {   bool y = isPrime(nums[i]);
            if(!y){
               numcp.push_back(nums[i]);
            }
        }
       
        // v_idx for getting non prime number's index
        for(int i=0;i<numcp.size();i++){
        v_idx.push_back(i);
        }
        //start playing, if get prime number omit that
         n=numcp.size();
        int i=0,c=0;
        while(i<numcp.size()){
            bool x = isPrime(numcp[i]);
            if(!x){
              int div=getFactor(numcp[i]);
              if(numcp[i]==0)numcp[i]=div;
              numcp[i]/=div;
              c++;
              i--;
            }
            i++;
        }
         numcp.clear();
        v_idx.clear();
        //numcp.clear();
        if(c%2==0) return false;
        else return true;
    }
};
