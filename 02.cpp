/*尽量以const,enum,inline替换#define

宏定义是预处理器的工作，编译器可能看不见这个宏名，因此错误检测会有偏差，例如#define ASPECT_RATIO 1.653，
报错可能会提到1.653而不是宏的名字，因为宏名可能未进入记号表

对于形似函数的宏最好改用inline函数予以替换，可以获得宏的效率以及类型安全性
template<typename T>
inline void callMax(const T& a,const T& b)
{
    f(a>b>a:b);
}
//inline 必须与定义放在一起才起效，不能仅放在声明部分。inline可解决频繁使用的函数占用大量内存的问题
*/