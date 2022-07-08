int[] sortFunc(int[] ar,int minVal,int minIdx,int maxVal){
        if(minVal>maxVal)return ar;
        int tmpVal=0;
        for (int i = 0; i <ar.length; i++) {
            if(ar[i]==minVal){
                tmpVal=ar[minIdx];
                ar[minIdx]=minVal;
                ar[i]=tmpVal;
                minIdx++;
            }
        }minVal++;
        sorting012(ar,minVal,minIdx,maxVal);
}

