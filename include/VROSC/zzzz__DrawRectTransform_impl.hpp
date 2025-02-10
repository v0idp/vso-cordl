#pragma once
// IWYU pragma private; include "VROSC/DrawRectTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__DrawRectTransform_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::VROSC::DrawRectTransform.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrawRectTransform::*)()>(&::VROSC::DrawRectTransform::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17a9ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrawRectTransform*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrawRectTransform._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrawRectTransform::*)()>(&::VROSC::DrawRectTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a9f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrawRectTransform*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::DrawRectTransform::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::DrawRectTransform::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void VROSC::DrawRectTransform::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DrawRectTransform::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrawRectTransform*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DrawRectTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrawRectTransform*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DrawRectTransform* VROSC::DrawRectTransform::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DrawRectTransform*>());
}
// Ctor Parameters []
constexpr ::VROSC::DrawRectTransform::DrawRectTransform()   {
}
