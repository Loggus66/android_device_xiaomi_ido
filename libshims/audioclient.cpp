/*
 * Copyright (C) 2020 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 *
 * The legacy RIL blob references android::AudioSystem::setErrorCallback
 * (mangled: _ZN7android11AudioSystem16setErrorCallbackEPFviE), removed in O
 * and renamed to addErrorCallback. Under VNDK 30 a vendor process cannot
 * load libaudioclient at all, so forwarding is impossible; register the
 * callback pointer but never invoke it. audioserver-death handling is
 * done by the framework/HAL stack on modern builds.
 */
namespace android {
extern "C" void _ZN7android11AudioSystem16setErrorCallbackEPFviE(void (*cb)(int))
{
    (void)cb;
}
} // namespace android
