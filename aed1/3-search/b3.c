#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int cmp(const void *a, const void *b) {
    // return (*(ll*)a - *(ll*)b);
    ll x = *(const ll*)a;
    ll y = *(const ll*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int n;

int main()
{
    scanf("%d", &n);
    ll vect[n];
    int size = sizeof(vect) / sizeof(vect[0]);

    for (int i=0; i<n; i++) {
        scanf("%lld", &vect[i]);
    }

    qsort(vect, size, sizeof(int), cmp);
    
    ll x = vect[(n-1)/2];

    ll sum = 0;
    for (int i=0; i<n; i++) {
        ll diff = vect[i] - x;
        if (diff < 0) diff = (-1)*diff;
        sum += diff;
    }    

    printf("%lld", sum);

    return 0;
}