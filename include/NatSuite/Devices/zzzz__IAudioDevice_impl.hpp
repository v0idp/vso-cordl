#pragma once
// IWYU pragma private; include "NatSuite/Devices/IAudioDevice.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "NatSuite/Devices/zzzz__IAudioDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "NatSuite/Devices/zzzz__SampleBufferDelegate_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::IAudioDevice.get_sampleRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::IAudioDevice::*)()>(&::NatSuite::Devices::IAudioDevice::get_sampleRate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::IAudioDevice.get_channelCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::IAudioDevice::*)()>(&::NatSuite::Devices::IAudioDevice::get_channelCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::IAudioDevice.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::IAudioDevice::*)(::NatSuite::Devices::SampleBufferDelegate*)>(&::NatSuite::Devices::IAudioDevice::StartRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline int32_t NatSuite::Devices::IAudioDevice::get_sampleRate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t NatSuite::Devices::IAudioDevice::get_channelCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::IAudioDevice::StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IAudioDevice*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delegate);
}
/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr  NatSuite::Devices::IAudioDevice::operator ::NatSuite::Devices::IMediaDevice*() noexcept {
return static_cast<::NatSuite::Devices::IMediaDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* NatSuite::Devices::IAudioDevice::i___NatSuite__Devices__IMediaDevice() noexcept {
return static_cast<::NatSuite::Devices::IMediaDevice*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr  NatSuite::Devices::IAudioDevice::operator ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* NatSuite::Devices::IAudioDevice::i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
