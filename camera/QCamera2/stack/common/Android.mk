LOCAL_PATH := $(call my-dir)

# R migration: replaces LOCAL_COPY_HEADERS from libmmcamera_interface.
include $(CLEAR_VARS)
LOCAL_MODULE := libmmcamera_interface_headers
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)
include $(BUILD_HEADER_LIBRARY)
