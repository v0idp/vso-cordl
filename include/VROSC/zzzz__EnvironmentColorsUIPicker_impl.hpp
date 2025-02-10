#pragma once
// IWYU pragma private; include "VROSC/EnvironmentColorsUIPicker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__EnvironmentColorsUIPicker_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include "VROSC/zzzz__EnvironmentColorsUIPicker_def.hpp"
#include "VROSC/zzzz__UIColorPicker_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::EnvironmentColorsUIPicker_Type::EnvironmentColorsUIPicker_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::EnvironmentColorsUIPicker_Type::EnvironmentColorsUIPicker_Type()   {
}
constexpr ::VROSC::EnvironmentColorsUIPicker_Type  VROSC::EnvironmentColorsUIPicker_Type::Primary{static_cast<int32_t>(0x0)};
constexpr ::VROSC::EnvironmentColorsUIPicker_Type  VROSC::EnvironmentColorsUIPicker_Type::Active{static_cast<int32_t>(0x1)};
constexpr ::VROSC::EnvironmentColorsUIPicker_Type  VROSC::EnvironmentColorsUIPicker_Type::Accent{static_cast<int32_t>(0x2)};
constexpr ::VROSC::EnvironmentColorsUIPicker_Type  VROSC::EnvironmentColorsUIPicker_Type::Instrument{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.get_Color
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::get_Color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1744724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "get_Color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1744804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17449dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1744ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.GetNameByType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::GetNameByType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1744954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "GetNameByType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.GetFromSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::GetFromSettings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1744acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "GetFromSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.WriteToSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)(::UnityEngine::Color)>(&::VROSC::EnvironmentColorsUIPicker::WriteToSettings)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1744ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "WriteToSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)(::UnityEngine::Color)>(&::VROSC::EnvironmentColorsUIPicker::SetColor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x174454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.ColorPicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)(::UnityEngine::Color)>(&::VROSC::EnvironmentColorsUIPicker::ColorPicked)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1744d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "ColorPicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker.SetupForEditor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::SetupForEditor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1744d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "SetupForEditor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentColorsUIPicker._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentColorsUIPicker::*)()>(&::VROSC::EnvironmentColorsUIPicker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1744e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIColorPicker>& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__colorPicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorPicker;
}
constexpr ::UnityW<::VROSC::UIColorPicker> const& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__colorPicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorPicker;
}
constexpr void VROSC::EnvironmentColorsUIPicker::__cordl_internal_set__colorPicker(::UnityW<::VROSC::UIColorPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::EnvironmentColorsUIPicker::__cordl_internal_set__mesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void VROSC::EnvironmentColorsUIPicker::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::EnvironmentColorsUIPicker_Type& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::VROSC::EnvironmentColorsUIPicker_Type const& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void VROSC::EnvironmentColorsUIPicker::__cordl_internal_set__type(::VROSC::EnvironmentColorsUIPicker_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::System::Action*& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get_OnColorPicked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorPicked;
}
constexpr ::System::Action* const& VROSC::EnvironmentColorsUIPicker::__cordl_internal_get_OnColorPicked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorPicked;
}
constexpr void VROSC::EnvironmentColorsUIPicker::__cordl_internal_set_OnColorPicked(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnColorPicked)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Color VROSC::EnvironmentColorsUIPicker::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "get_Color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentColorsUIPicker::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentColorsUIPicker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentColorsUIPicker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VROSC::EnvironmentColorsUIPicker::GetNameByType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "GetNameByType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Color VROSC::EnvironmentColorsUIPicker::GetFromSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "GetFromSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentColorsUIPicker::WriteToSettings(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "WriteToSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::EnvironmentColorsUIPicker::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::EnvironmentColorsUIPicker::ColorPicked(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "ColorPicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::EnvironmentColorsUIPicker::SetupForEditor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        "SetupForEditor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentColorsUIPicker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentColorsUIPicker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EnvironmentColorsUIPicker* VROSC::EnvironmentColorsUIPicker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EnvironmentColorsUIPicker*>());
}
// Ctor Parameters []
constexpr ::VROSC::EnvironmentColorsUIPicker::EnvironmentColorsUIPicker()   {
}
