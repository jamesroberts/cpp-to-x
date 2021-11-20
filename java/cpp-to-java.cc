#include "cpp-to-java.h"
#include "../src/cpp-to-x.h"

JNIEXPORT jstring JNICALL Java_Main_hello(JNIEnv* env, jobject) {
    std::string result = hello_world_string();
    return env->NewStringUTF(result.c_str());
}