#include <jni.h>
#include <string.h>

JNIEXPORT jstring
JNICALL Java_fr_imie_imiendk_MainActivity_stringHello(JNIEnv *env, jobject obj){
return (*env)->NewStringUTF(env, "Hello IMIE !!!");
}
