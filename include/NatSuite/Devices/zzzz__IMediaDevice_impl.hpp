#pragma once
// IWYU pragma private; include "NatSuite/Devices/IMediaDevice.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::IMediaDevice.get_uniqueID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::IMediaDevice::*)()>(&::NatSuite::Devices::IMediaDevice::get_uniqueID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::IMediaDevice.get_running
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::IMediaDevice::*)()>(&::NatSuite::Devices::IMediaDevice::get_running)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::IMediaDevice.StopRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::IMediaDevice::*)()>(&::NatSuite::Devices::IMediaDevice::StopRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline ::StringW NatSuite::Devices::IMediaDevice::get_uniqueID()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::IMediaDevice::get_running()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::IMediaDevice::StopRunning()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::IMediaDevice*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr  NatSuite::Devices::IMediaDevice::operator ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* NatSuite::Devices::IMediaDevice::i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
