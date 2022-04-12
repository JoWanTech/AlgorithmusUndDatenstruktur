//
// Created by jowan on 011 11.04.2022.
//

#include "PraefixSum.h"

int PraefixSum::sum(int *arr, int n) {
    int res = 0;
    for (int i = 0; i < n;++i) {

        res += arr[i];
        arr[i] = res / (i + 1);
    }
    return  arr[n - 1] ;
}