#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_byronhallett_com_demo_1memo_1cpp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
