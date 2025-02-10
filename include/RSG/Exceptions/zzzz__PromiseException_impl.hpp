#pragma once
// IWYU pragma private; include "RSG/Exceptions/PromiseException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "RSG/Exceptions/zzzz__PromiseException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::RSG::Exceptions::PromiseException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Exceptions::PromiseException::*)()>(&::RSG::Exceptions::PromiseException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17f7518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Exceptions::PromiseException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Exceptions::PromiseException::*)(::StringW)>(&::RSG::Exceptions::PromiseException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17f7570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Exceptions::PromiseException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Exceptions::PromiseException::*)(::StringW, ::System::Exception*)>(&::RSG::Exceptions::PromiseException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17f75d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void RSG::Exceptions::PromiseException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Exceptions::PromiseException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void RSG::Exceptions::PromiseException::_ctor(::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, inner);
}
inline ::RSG::Exceptions::PromiseException* RSG::Exceptions::PromiseException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Exceptions::PromiseException*>());
}
inline ::RSG::Exceptions::PromiseException* RSG::Exceptions::PromiseException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Exceptions::PromiseException*>(message));
}
inline ::RSG::Exceptions::PromiseException* RSG::Exceptions::PromiseException::New_ctor(::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Exceptions::PromiseException*>(message, inner));
}
// Ctor Parameters []
constexpr ::RSG::Exceptions::PromiseException::PromiseException()   {
}
