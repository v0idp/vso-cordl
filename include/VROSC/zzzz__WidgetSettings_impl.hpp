#pragma once
// IWYU pragma private; include "VROSC/WidgetSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::WidgetSettings_Identifier::WidgetSettings_Identifier(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::WidgetSettings_Identifier::WidgetSettings_Identifier()   {
}
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Organ{static_cast<int32_t>(0x0)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Board{static_cast<int32_t>(0x1)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Harp{static_cast<int32_t>(0x2)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Clustr{static_cast<int32_t>(0x3)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Wavemin{static_cast<int32_t>(0x4)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Rimba{static_cast<int32_t>(0x5)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Empads{static_cast<int32_t>(0x6)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Effects{static_cast<int32_t>(0x7)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Looper{static_cast<int32_t>(0x8)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Microphone{static_cast<int32_t>(0x9)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::TapeRecorder{static_cast<int32_t>(0xa)};
constexpr ::VROSC::WidgetSettings_Identifier  VROSC::WidgetSettings_Identifier::Browser{static_cast<int32_t>(0xb)};
//  Writing Method size for method: ::VROSC::WidgetSettings.get_ID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::WidgetSettings_Identifier (::VROSC::WidgetSettings::*)()>(&::VROSC::WidgetSettings::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171212c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        "get_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetSettings.get_SpawnHeightModifier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::WidgetSettings::*)()>(&::VROSC::WidgetSettings::get_SpawnHeightModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1712134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        "get_SpawnHeightModifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetSettings.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::WidgetSettings::*)()>(&::VROSC::WidgetSettings::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171213c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetSettings::*)()>(&::VROSC::WidgetSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::WidgetSettings::__cordl_internal_get__spawnHeightModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnHeightModifier;
}
constexpr float_t const& VROSC::WidgetSettings::__cordl_internal_get__spawnHeightModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnHeightModifier;
}
constexpr void VROSC::WidgetSettings::__cordl_internal_set__spawnHeightModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnHeightModifier = value;
}
constexpr ::VROSC::WidgetSettings_Identifier& VROSC::WidgetSettings::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr ::VROSC::WidgetSettings_Identifier const& VROSC::WidgetSettings::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void VROSC::WidgetSettings::__cordl_internal_set__id(::VROSC::WidgetSettings_Identifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& VROSC::WidgetSettings::__cordl_internal_get__displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr ::StringW const& VROSC::WidgetSettings::__cordl_internal_get__displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr void VROSC::WidgetSettings::__cordl_internal_set__displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::WidgetSettings_Identifier VROSC::WidgetSettings::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        "get_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::WidgetSettings_Identifier, false>(this, ___internal_method);
}
inline float_t VROSC::WidgetSettings::get_SpawnHeightModifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        "get_SpawnHeightModifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW VROSC::WidgetSettings::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::WidgetSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WidgetSettings* VROSC::WidgetSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WidgetSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::WidgetSettings::WidgetSettings()   {
}
