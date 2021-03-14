// hello.cc
#include <node.h>

namespace demo
{

    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Value;
    using v8::Number;

    void Method(const FunctionCallbackInfo<Value> &args)
    {
        Isolate *isolate = args.GetIsolate();

        double x = 100.2332, y = 200.6557;

        auto total = Number::New(isolate, x + y);
        args.GetReturnValue().Set(total);
    }

    void Initialize(Local<Object> exports)
    {
        NODE_SET_METHOD(exports, "hello", Method);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

} // namespace demo