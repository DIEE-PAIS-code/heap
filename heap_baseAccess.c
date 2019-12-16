#include <stdio.h>


void printArray(int* v, int n){
    printf("[");
    for (int i=0; i<n; i++){
        printf("%d ",v[i]);
    }
    printf("]\n");
}


int parent(int i){
    return (i-1)/2;
}


int left(int i){
    return 2*i+1;
}

int right(int i){
    return 2*(i+1);
}



int main() {
    int i, i_p, i_l, i_r;
    const int nEl=100;
    int vett[nEl]={16,14, 10, 8,7,9, 3,2, 4,1, -1};
    int heap_size=10;
    printArray(vett, heap_size);

    i=4;
    printf("element %d, val %d\n",i,vett[i]);

    // PARENT
    if (i>0){
      i_p=parent(i);
      printf("Parent: element %d, val %d\n",i_p,vett[i_p]);
    }
    // Left
    i_l=left(i);
    if (i_l<heap_size)
      printf("Left: element %d, val %d\n",i_l,vett[i_l]);

    //Right
    i_r=right(i);
    if (i_r<heap_size)
      printf("Right: element %d, val %d\n",i_r,vett[i_r]);


    getchar();
    return 0;
}
