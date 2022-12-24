//
// Created by wuyan on 2022/10/8.
//

#ifndef __HOUJIE_COMPLEX_H
#define __HOUJIE_COMPLEX_H

template<typename T>
class complex {
private:
    T real, virt;
public:
    complex()= default;
    complex(T r, T v) : real(r), virt(v){}

};

#endif //HOUJIE_COMPLEX_H
