int copy(int *arr[], int c, int *arr1[]){
  for (int i=0;i<c;i++){
    *(arr1+i)=*(arr+i);
  }
}
int main(){
  int array[3]={1,2,3};
  int array6[3]={5,6,7};
  copy(array,3,array6);
  printf("%d %d %d", array6[0], array6[1], array6[2]);
  return 0;
}
