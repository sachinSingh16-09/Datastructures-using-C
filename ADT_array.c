//Program to create,set value and print an array of marks

#include <stdio.h>
#include <stdlib.h>
   struct Array{
       int total_size;                                           // total array size we want
       int used_size;                                            // the memory used
       int *ptr;                                                 // pointer pointing to the first element of the array marks
   };
   void create_array(struct Array*a, int tsize, int usize)       // local variables of the function create_array
   {
       a->total_size= tsize;
       a->used_size= usize;
       a->ptr=(int *)malloc(tsize * sizeof(int));
   }
   void setValue(struct Array *a){
       int n;
       for(int i=0; i< a->used_size; i++){
           printf("enter the element at %d",i);
           scanf("%d",&n);
           (a->ptr)[i]=n;
       }
   }
   void show(struct Array *a){
       for(int i=0; i< a->used_size; i++){
           printf("%d\n", (a->ptr)[i]);
       }
   }
   int main( ){
       struct Array marks;
       create_array(&marks,10,2);
       setValue(&marks);
       show(&marks);
        return 0;
   }
