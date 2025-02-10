#pragma once
// IWYU pragma private; include "VROSC/UI/UIColorUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/UI/zzzz__UIColorUtil_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UIColorUtil.DesaturateColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t, float_t)>(&::VROSC::UI::UIColorUtil::DesaturateColor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17e74f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorUtil*>::get(),
                        "DesaturateColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorUtil._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorUtil::*)()>(&::VROSC::UI::UIColorUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e756c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorUtil*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color VROSC::UI::UIColorUtil::DesaturateColor(::UnityEngine::Color  color, float_t  desaturation, float_t  darken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorUtil*>::get(),
                        "DesaturateColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, color, desaturation, darken);
}
inline void VROSC::UI::UIColorUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorUtil*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UIColorUtil* VROSC::UI::UIColorUtil::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIColorUtil*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIColorUtil::UIColorUtil()   {
}
