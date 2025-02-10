#pragma once
// IWYU pragma private; include "UnityEngine/Resolution.hpp"
#include "UnityEngine/zzzz__RefreshRate_impl.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
//  Writing Method size for method: ::UnityEngine::Resolution.get_width
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Resolution::*)()>(&::UnityEngine::Resolution::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f6a480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Resolution>::get(),
                        "get_width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resolution.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Resolution::*)()>(&::UnityEngine::Resolution::ToString)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2f6a488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Resolution>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Resolution>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Resolution::get_width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Resolution>::get(),
                        "get_width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Resolution::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Resolution>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RefreshRate", ty: "::UnityEngine::RefreshRate", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Resolution::Resolution(int32_t  m_Width, int32_t  m_Height, ::UnityEngine::RefreshRate  m_RefreshRate) noexcept  {
this->m_Width = m_Width;
this->m_Height = m_Height;
this->m_RefreshRate = m_RefreshRate;
}
// Ctor Parameters []
constexpr ::UnityEngine::Resolution::Resolution()   {
}
