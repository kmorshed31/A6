* biggest_of_two(int *p, int *q) {
    return (*p > *q) ? p : q;
}

int* biggest_of_three(int *p, int *q, int *r) {
    
    int *bigger_pq = biggest_of_two(p, q);
    
    return biggest_of_two(bigger_pq, r);
