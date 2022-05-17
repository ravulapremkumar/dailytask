#include<stdio.h>
void index_ele(int array[],int i,int len,int x)
{
    
    int index=-1;
     for(i=0;i<len;i++)
    {
      if(array[i]==x){
         index=i;
         break;
    }
    }
    
        printf("index is %d",index);
    
}
int main()
{
    int array[]={2,3,4,6,7};
    int len=sizeof array /sizeof array[0];
    int i;
    int x=3;
    index_ele(array,i,len,x );

}