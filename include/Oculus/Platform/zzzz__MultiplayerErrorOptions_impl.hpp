#pragma once
// IWYU pragma private; include "Oculus/Platform/MultiplayerErrorOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorOptions_def.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorErrorKey_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)()>(&::Oculus::Platform::MultiplayerErrorOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2873a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.SetErrorKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)(::Oculus::Platform::MultiplayerErrorErrorKey)>(&::Oculus::Platform::MultiplayerErrorOptions::SetErrorKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2873acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                        "SetErrorKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorErrorKey>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.op_Explicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Oculus::Platform::MultiplayerErrorOptions*)>(&::Oculus::Platform::MultiplayerErrorOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2873b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)()>(&::Oculus::Platform::MultiplayerErrorOptions::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2873b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::MultiplayerErrorOptions::__cordl_internal_get_Handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::MultiplayerErrorOptions::__cordl_internal_get_Handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Handle;
}
constexpr void Oculus::Platform::MultiplayerErrorOptions::__cordl_internal_set_Handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Handle = value;
}
inline void Oculus::Platform::MultiplayerErrorOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::MultiplayerErrorOptions::SetErrorKey(::Oculus::Platform::MultiplayerErrorErrorKey  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                        "SetErrorKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorErrorKey>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::MultiplayerErrorOptions::op_Explicit___System__IntPtr(::Oculus::Platform::MultiplayerErrorOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::MultiplayerErrorOptions::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::MultiplayerErrorOptions* Oculus::Platform::MultiplayerErrorOptions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MultiplayerErrorOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MultiplayerErrorOptions::MultiplayerErrorOptions()   {
}
