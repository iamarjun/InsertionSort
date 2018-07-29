//
// Created by arjun on 1/31/18.
//

#ifndef INSERTIONSORT_INSERTIONSORTRECURSION_H
#define INSERTIONSORT_INSERTIONSORTRECURSION_H

#endif //INSERTIONSORT_INSERTIONSORTRECURSION_H


void swap(int a[], int i, int j){

    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

void insert(int a[], int i){

    int pos = i;

    while (pos > 0 && a[pos] < a[pos-1]){

        swap(a, pos, pos-1);
        pos = pos-1;


    }
}

void sort(int a[], int i, int n){

    insert(a, i);

    if(i < n){

        sort(a, i+1, n);
    }


}