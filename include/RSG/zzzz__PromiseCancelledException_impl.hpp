#pragma once
// IWYU pragma private; include "RSG/PromiseCancelledException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "RSG/zzzz__PromiseCancelledException_def.hpp"
//  Writing Method size for method: ::RSG::PromiseCancelledException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PromiseCancelledException::*)()>(&::RSG::PromiseCancelledException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17f2ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseCancelledException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseCancelledException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PromiseCancelledException::*)(::StringW)>(&::RSG::PromiseCancelledException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17f2f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseCancelledException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void RSG::PromiseCancelledException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseCancelledException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::PromiseCancelledException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseCancelledException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::RSG::PromiseCancelledException* RSG::PromiseCancelledException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::PromiseCancelledException*>());
}
inline ::RSG::PromiseCancelledException* RSG::PromiseCancelledException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::PromiseCancelledException*>(message));
}
// Ctor Parameters []
constexpr ::RSG::PromiseCancelledException::PromiseCancelledException()   {
}
