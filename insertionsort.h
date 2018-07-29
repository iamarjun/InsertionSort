//
// Created by arjun on 1/31/18.
//

#ifndef INSERTIONSORT_INSERTIONSORT_H
#define INSERTIONSORT_INSERTIONSORT_H

#endif //INSERTIONSORT_INSERTIONSORT_H

void swap(int a[], int i, int j){

    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

void sort(int a[], int n){

    int pos;

    for (int i = 0; i < n ; ++i) {

        pos = i;

        while(pos > 0 && a[pos] < a[pos-1]){

            swap(a, pos, pos-1);
            pos = pos-1;
        }

    }
}