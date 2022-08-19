//
// Created by wuyan on 2022/8/18.
//

#ifndef INHERIT_NEWPLANE_H
#define INHERIT_NEWPLANE_H
namespace avdance {
    class NewPlane {
    private:
        int newPlaneId;
    public:
        int getId();

        void setId(int id);
        void print();
    };
}
#endif //INHERIT_NEWPLANE_H
