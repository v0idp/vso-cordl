#pragma once
// IWYU pragma private; include "UnityEngine/GradientUsageAttribute.hpp"
#include "UnityEngine/zzzz__ColorSpace_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__GradientUsageAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::GradientUsageAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GradientUsageAttribute::*)(bool)>(&::UnityEngine::GradientUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2f85c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GradientUsageAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GradientUsageAttribute::__cordl_internal_get_hdr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hdr;
}
constexpr bool const& UnityEngine::GradientUsageAttribute::__cordl_internal_get_hdr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hdr;
}
constexpr void UnityEngine::GradientUsageAttribute::__cordl_internal_set_hdr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hdr = value;
}
constexpr ::UnityEngine::ColorSpace& UnityEngine::GradientUsageAttribute::__cordl_internal_get_colorSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSpace;
}
constexpr ::UnityEngine::ColorSpace const& UnityEngine::GradientUsageAttribute::__cordl_internal_get_colorSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSpace;
}
constexpr void UnityEngine::GradientUsageAttribute::__cordl_internal_set_colorSpace(::UnityEngine::ColorSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorSpace = value;
}
inline void UnityEngine::GradientUsageAttribute::_ctor(bool  hdr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GradientUsageAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hdr);
}
inline ::UnityEngine::GradientUsageAttribute* UnityEngine::GradientUsageAttribute::New_ctor(bool  hdr)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::GradientUsageAttribute*>(hdr));
}
// Ctor Parameters []
constexpr ::UnityEngine::GradientUsageAttribute::GradientUsageAttribute()   {
}
