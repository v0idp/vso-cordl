#pragma once
// IWYU pragma private; include "VROSC/UI/UIColorSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/UI/zzzz__UIColorSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__IMappedColor_def.hpp"
#include "VROSC/UI/zzzz__SkinnableColorsMasterData_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
#include "VROSC/UI/zzzz__UIColorSettings_def.hpp"
#include "VROSC/UI/zzzz__UIExplicitColor_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UIColorSettings_DynamicColorMapping.get_Color
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UIExplicitColor* (::VROSC::UI::UIColorSettings_DynamicColorMapping::*)()>(&::VROSC::UI::UIColorSettings_DynamicColorMapping::get_Color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e8130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        "get_Color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorSettings_DynamicColorMapping.get_ColorGetter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::UI::UIColorGetter> (::VROSC::UI::UIColorSettings_DynamicColorMapping::*)()>(&::VROSC::UI::UIColorSettings_DynamicColorMapping::get_ColorGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e8138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        "get_ColorGetter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorSettings_DynamicColorMapping._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorSettings_DynamicColorMapping::*)(::VROSC::UI::UIColorSettings_DynamicColorMapping*)>(&::VROSC::UI::UIColorSettings_DynamicColorMapping::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17e7ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorSettings_DynamicColorMapping.UpdateColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorSettings_DynamicColorMapping::*)()>(&::VROSC::UI::UIColorSettings_DynamicColorMapping::UpdateColor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17e7e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        "UpdateColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::UIColorGetter>& VROSC::UI::UIColorSettings_DynamicColorMapping::__cordl_internal_get__colorGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorGetter;
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& VROSC::UI::UIColorSettings_DynamicColorMapping::__cordl_internal_get__colorGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorGetter;
}
constexpr void VROSC::UI::UIColorSettings_DynamicColorMapping::__cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UIExplicitColor*& VROSC::UI::UIColorSettings_DynamicColorMapping::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::VROSC::UI::UIExplicitColor* const& VROSC::UI::UIColorSettings_DynamicColorMapping::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::UI::UIColorSettings_DynamicColorMapping::__cordl_internal_set__color(::VROSC::UI::UIExplicitColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____color)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::UI::UIExplicitColor* VROSC::UI::UIColorSettings_DynamicColorMapping::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        "get_Color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UI::UIExplicitColor*, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::UI::UIColorGetter> VROSC::UI::UIColorSettings_DynamicColorMapping::get_ColorGetter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        "get_ColorGetter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::UI::UIColorGetter>, false>(this, ___internal_method);
}
inline void VROSC::UI::UIColorSettings_DynamicColorMapping::_ctor(::VROSC::UI::UIColorSettings_DynamicColorMapping*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::UI::UIColorSettings_DynamicColorMapping::UpdateColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings_DynamicColorMapping*>::get(),
                        "UpdateColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UIColorSettings_DynamicColorMapping* VROSC::UI::UIColorSettings_DynamicColorMapping::New_ctor(::VROSC::UI::UIColorSettings_DynamicColorMapping*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIColorSettings_DynamicColorMapping*>(other));
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIColorSettings_DynamicColorMapping::UIColorSettings_DynamicColorMapping()   {
}
//  Writing Method size for method: ::VROSC::UI::UIColorSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorSettings::*)(::VROSC::UI::UIColorSettings*)>(&::VROSC::UI::UIColorSettings::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x17e7868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIColorSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorSettings.GetMappedColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* (::VROSC::UI::UIColorSettings::*)()>(&::VROSC::UI::UIColorSettings::GetMappedColors)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x17e7b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        "GetMappedColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorSettings.UpdateColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorSettings::*)()>(&::VROSC::UI::UIColorSettings::UpdateColors)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x17e7d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        "UpdateColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorSettings.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorSettings::*)(::VROSC::UI::UIColorGetter*, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::VROSC::UI::UIColorSettings::Set)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x17e7f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIColorGetter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::SkinnableColorsMasterData>& VROSC::UI::UIColorSettings::__cordl_internal_get__master()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____master;
}
constexpr ::UnityW<::VROSC::UI::SkinnableColorsMasterData> const& VROSC::UI::UIColorSettings::__cordl_internal_get__master() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____master;
}
constexpr void VROSC::UI::UIColorSettings::__cordl_internal_set__master(::UnityW<::VROSC::UI::SkinnableColorsMasterData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____master)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>*& VROSC::UI::UIColorSettings::__cordl_internal_get__mappedColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mappedColors;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>* const& VROSC::UI::UIColorSettings::__cordl_internal_get__mappedColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mappedColors;
}
constexpr void VROSC::UI::UIColorSettings::__cordl_internal_set__mappedColors(::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mappedColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UI::UIColorSettings::_ctor(::VROSC::UI::UIColorSettings*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIColorSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* VROSC::UI::UIColorSettings::GetMappedColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        "GetMappedColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>*, false>(this, ___internal_method);
}
inline void VROSC::UI::UIColorSettings::UpdateColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        "UpdateColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::UIColorSettings::Set(::VROSC::UI::UIColorGetter*  colorGetter, ::UnityEngine::Color  normal, ::UnityEngine::Color  hover, ::UnityEngine::Color  disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorSettings*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIColorGetter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorGetter, normal, hover, disabled);
}
inline ::VROSC::UI::UIColorSettings* VROSC::UI::UIColorSettings::New_ctor(::VROSC::UI::UIColorSettings*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIColorSettings*>(other));
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIColorSettings::UIColorSettings()   {
}
