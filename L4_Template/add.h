#ifndef L4_TEMPLATE_ADD_H
#define L4_TEMPLATE_ADD_H

template <typename T> T add(const T a, const T b){
    return a + b;
}
//同样的意思： template <class T> T add(const T a, const T b);

template <typename T1, typename T2, typename T3> const T1 add(const T2& a, const T3& b){
    return a + b;
}
//T1 is the return type

#endif //L4_TEMPLATE_ADD_H
