typedef char *pstring;
const pstring cstr = 0; 
const pstring *ps = 0;



这里我的理解是char * 可以理解成一个指针，const是修饰整个指针的，所以是常量指针，而不是指针常量，而直接写const int * p = a;这里const修饰的是指针p指向的int类型，所以第一个是相当于char * const sctr = 0;第二个相当于char * const * ps = 0;