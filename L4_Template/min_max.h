#ifndef L4_TEMPLATE_MIN_MAX_H
#define L4_TEMPLATE_MIN_MAX_H

//template <typename T> T max(const T& a, const T& b){
//    if (a > b) return a;
//    else return b;
//}

template <typename T> T max(const T& a, const T& b){
    return a > b ? a : b;
    // if a>b condition true return a
    // if a>b condition false return b
}

template <typename T> T min(const T& a, const T& b){
    return a < b ? a : b;
}

#endif //L4_TEMPLATE_MIN_MAX_H