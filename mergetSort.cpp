//important 
//归并排序递归算法
const int maxn = 100;
//将数组A的[L1,R1]与[L2,R2]区间合并为有序区间
void merge(int A[], int l1, int l2, int r1, int r2)
{
    int i = l1, j = l2;
    int temp[maxn], index = 0;
    while (i <= r1 && j <= r2)
    {
        if (A[i] <= A[j])
        {
            temp[index++] = A[i++];
        }
        else
        {
            temp[index++] = A[j++];
        }
    }
    while (i <= r1)
    {
        temp[index++] = A[i++];
    }
    while (j <= r2)
    {
        temp[index++] = A[j++];
    }
    for(i=0; i<index; i++){
        A[l1+i] = temp[i];
    }
}
void mergeSort(int A[], int left, int right){
    if(left < right){
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid+1, right);
    merge(A, left, mid, mid+1, right);
    }
    
}