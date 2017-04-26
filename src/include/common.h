#ifndef LIBCORE_COMMON_H__
#define LIBCORE_COMMON_H__

#include <string>

namespace libcore{

using std::string;

/*!
*   标准基础类
*/
class BaseObject{
public:
    virtual ~BaseObject(){}
};

/*!
*   开始和停止功能
*/
class StartAndStop : public BaseObject {
public:

    virtual int  Start() = 0;
    virtual void Stop() = 0;
};

}

#endif
