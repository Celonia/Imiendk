LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := number-jni
LOCAL_SRC_FILES := number-jni.c

include $(BUILD_SHARED_LIBRARY)