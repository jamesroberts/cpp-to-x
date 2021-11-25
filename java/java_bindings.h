#include <jni.h>

jboolean to_java_boolean(bool value);
jchar to_java_char(char value);
jshort to_java_short(short value);
jint to_java_int(int value);
jlong to_java_long(long value);
jfloat to_java_float(float value);
jdouble to_java_double(double value);
jbyte to_java_byte(signed char value);
jsize to_java_size(int value);

// =============================================
//              From Java to C++                
// =============================================

bool to_cpp_bool(jboolean value);
char to_cpp_char(jchar value);
short to_cpp_short(jshort value);
int to_cpp_int(jint value);
long to_cpp_long(jlong value);
float to_cpp_float(float value);
double to_cpp_double(jdouble value);
signed char to_cpp_signed_char(jbyte value);
int to_cpp_size(jsize value);