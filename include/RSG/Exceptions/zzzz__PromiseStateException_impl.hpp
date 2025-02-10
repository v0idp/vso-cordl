#pragma once
// IWYU pragma private; include "RSG/Exceptions/PromiseStateException.hpp"
#include "RSG/Exceptions/zzzz__PromiseException_impl.hpp"
#include "RSG/Exceptions/zzzz__PromiseStateException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::RSG::Exceptions::PromiseStateException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Exceptions::PromiseStateException::*)()>(&::RSG::Exceptions::PromiseStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f7648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseStateException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Exceptions::PromiseStateException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Exceptions::PromiseStateException::*)(::StringW)>(&::RSG::Exceptions::PromiseStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f764c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseStateException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Exceptions::PromiseStateException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Exceptions::PromiseStateException::*)(::StringW, ::System::Exception*)>(&::RSG::Exceptions::PromiseStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f7650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseStateException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void RSG::Exceptions::PromiseStateException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseStateException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Exceptions::PromiseStateException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseStateException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void RSG::Exceptions::PromiseStateException::_ctor(::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Exceptions::PromiseStateException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, inner);
}
inline ::RSG::Exceptions::PromiseStateException* RSG::Exceptions::PromiseStateException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Exceptions::PromiseStateException*>());
}
inline ::RSG::Exceptions::PromiseStateException* RSG::Exceptions::PromiseStateException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Exceptions::PromiseStateException*>(message));
}
inline ::RSG::Exceptions::PromiseStateException* RSG::Exceptions::PromiseStateException::New_ctor(::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Exceptions::PromiseStateException*>(message, inner));
}
// Ctor Parameters []
constexpr ::RSG::Exceptions::PromiseStateException::PromiseStateException()   {
}
