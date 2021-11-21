// cpp-to-node.cc
#include <node.h>
#include "../src/cpp-to-x.h"

namespace cppToNode {
    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::Number;
    using v8::String;
    using v8::Value;
    using v8::NewStringType;

    void Method(const FunctionCallbackInfo<Value>& args) {
        Isolate* isolate = args.GetIsolate();

        std::string cpp_result = hello_world_string();

        v8::Local<v8::String> result;
        v8::MaybeLocal<v8::String> temp = String::NewFromUtf8(isolate, cpp_result.c_str(), NewStringType::kNormal);
        temp.ToLocal(&result);
        args.GetReturnValue().Set(result);
    }

    void Initialize(Local<Object> exports) {
        NODE_SET_METHOD(exports, "hello", Method);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize);
}