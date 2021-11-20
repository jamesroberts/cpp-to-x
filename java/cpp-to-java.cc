#include "cpp-to-java.h"
#include "../src/cpp-to-x.h"

JNIEXPORT jstring JNICALL Java_Main_hello(JNIEnv* env, jobject) {
    const char* cstr = hello_world_string().c_str();
    return env->NewStringUTF(cstr);
}