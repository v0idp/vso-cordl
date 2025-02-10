#pragma once
// IWYU pragma private; include "BeautifyEffect/Demo4.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeautifyEffect/zzzz__Demo4_def.hpp"
//  Writing Method size for method: ::BeautifyEffect::Demo4.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo4::*)()>(&::BeautifyEffect::Demo4::Update)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x180ee90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo4*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo4._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo4::*)()>(&::BeautifyEffect::Demo4::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180efb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo4*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void BeautifyEffect::Demo4::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo4*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo4*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeautifyEffect::Demo4* BeautifyEffect::Demo4::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeautifyEffect::Demo4*>());
}
// Ctor Parameters []
constexpr ::BeautifyEffect::Demo4::Demo4()   {
}
