#include <stdio.h>

typedef struct IntArrays{
    int *arr; // 8 B
    int len; // 4 B
} IntArrays;  // 14 B 

void int_array_print(IntArrays array)
{
    /* todo */
    // array.arr[i]

};

int int_array_find_index(IntArrays array, int element){
   /* todo */ 
}

int* int_array_find_ptr(IntArrays array, int element){
   /* todo */ 
}

int int_array_range(IntArrays array, int min, int max){
   /* todo */ 
}

int int_array_range_step(IntArrays array, int min, int max, int step){
   /* todo */ 
}

int int_array_sum(IntArrays array){
    /* todo */
}

int int_array_average(IntArrays array){
    /* todo */
}

int int_array_min(IntArrays array){
    /* todo */
}

int int_array_max(IntArrays array){
    /* todo */
}

int main(){
    int myarray[10] = {12,13,14,15,16,17,18,19,20};
    IntArrays array = { myarray, 10};
    // array.arr[0];
    // array.len;
    int_array_print(array);
}
