#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__QualitySettings_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
//  Writing Method size for method: ::UnityEngine::QualitySettings.OnActiveQualityLevelChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::QualitySettings::OnActiveQualityLevelChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f6a608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "OnActiveQualityLevelChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_antiAliasing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_antiAliasing)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f6a688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "get_antiAliasing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_antiAliasing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_antiAliasing)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f6a6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "set_antiAliasing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_activeColorSpace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ColorSpace (*)()>(&::UnityEngine::QualitySettings::get_activeColorSpace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f6a6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "get_activeColorSpace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::QualitySettings::setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<int32_t,int32_t>*, "activeQualityLevelChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get>(std::forward<::System::Action_2<int32_t,int32_t>*>(value));
}
inline ::System::Action_2<int32_t,int32_t>* UnityEngine::QualitySettings::getStaticF_activeQualityLevelChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<int32_t,int32_t>*, "activeQualityLevelChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get>();
}
inline void UnityEngine::QualitySettings::OnActiveQualityLevelChanged(int32_t  previousQualityLevel, int32_t  currentQualityLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "OnActiveQualityLevelChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousQualityLevel, currentQualityLevel);
}
inline int32_t UnityEngine::QualitySettings::get_antiAliasing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "get_antiAliasing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_antiAliasing(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "set_antiAliasing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ColorSpace UnityEngine::QualitySettings::get_activeColorSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QualitySettings*>::get(),
                        "get_activeColorSpace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::QualitySettings::QualitySettings()   {
}
