#include "java_bindings.h"

// =============================================
//              From C++ to Java                
// =============================================

jboolean to_java_boolean(bool value) {
    return (jboolean)value ? 1 : 0;
}

jchar to_java_char(char value) {
    return (jchar)value;
}

jshort to_java_short(short value) {
    return (jshort)value;
}

jint to_java_int(int value) {
    return (jint)value;
}

jlong to_java_long(long value) {
    return (jlong)value;
}

jfloat to_java_float(float value) {
    return (jfloat)value;
}

jdouble to_java_double(double value) {
    return (jdouble)value;
}

jbyte to_java_byte(signed char value) {
    return (jbyte)value;
}

jsize to_java_size(int value) {
    return (jsize)value;
}

// =============================================
//              From Java to C++                
// =============================================

bool to_cpp_bool(jboolean value) {
    return (bool)value != 0;
}

char to_cpp_char(jchar value) {
    return (char)value;
}

short to_cpp_short(jshort value) {
    return (short)value;
}

int to_cpp_int(jint value) {
    return (int)value;
}

long to_cpp_long(jlong value) {
    return (long)value;
}

float to_cpp_float(float value) {
    return (float)value;
}

double to_cpp_double(jdouble value) {
    return (double)value;
}

signed char to_cpp_signed_char(jbyte value) {
    return (signed char)value;
}

int to_cpp_size(jsize value) {
    return (int)value;
}