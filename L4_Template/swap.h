#ifndef L4_TEMPLATE_SWAP_H
#define L4_TEMPLATE_SWAP_H

template <typename T> void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}



#endif //L4_TEMPLATE_SWAP_H
