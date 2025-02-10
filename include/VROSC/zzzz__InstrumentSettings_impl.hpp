#pragma once
// IWYU pragma private; include "VROSC/InstrumentSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__WidgetSettings_impl.hpp"
#include "VROSC/zzzz__InstrumentSettings_def.hpp"
#include "VROSC/zzzz__InstrumentSettings_def.hpp"
#include "VROSC/zzzz__PatchGroup_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentSettings_ScaleSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentSettings_ScaleSettings::*)()>(&::VROSC::InstrumentSettings_ScaleSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x171095c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings_ScaleSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_StartNoteIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartNoteIndex;
}
constexpr int32_t const& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_StartNoteIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartNoteIndex;
}
constexpr void VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_set_StartNoteIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartNoteIndex = value;
}
constexpr int32_t& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_DefaultIncludeNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultIncludeNotes;
}
constexpr int32_t const& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_DefaultIncludeNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultIncludeNotes;
}
constexpr void VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_set_DefaultIncludeNotes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultIncludeNotes = value;
}
constexpr bool& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_OverrideScaleDefaults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideScaleDefaults;
}
constexpr bool const& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_OverrideScaleDefaults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideScaleDefaults;
}
constexpr void VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_set_OverrideScaleDefaults(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideScaleDefaults = value;
}
constexpr ::ArrayW<bool,::Array<bool>*>& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_ScaleNotesToggled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleNotesToggled;
}
constexpr ::ArrayW<bool,::Array<bool>*> const& VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_get_ScaleNotesToggled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleNotesToggled;
}
constexpr void VROSC::InstrumentSettings_ScaleSettings::__cordl_internal_set_ScaleNotesToggled(::ArrayW<bool,::Array<bool>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScaleNotesToggled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InstrumentSettings_ScaleSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings_ScaleSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentSettings_ScaleSettings* VROSC::InstrumentSettings_ScaleSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentSettings_ScaleSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentSettings_ScaleSettings::InstrumentSettings_ScaleSettings()   {
}
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_PatchGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::PatchGroup> (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_PatchGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_PatchGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_StartingPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_StartingPatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_StartingPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_StartingChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_StartingChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_StartingChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_StartOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_StartOctave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_StartOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_MinOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_MinOctave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_MinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_MaxOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_MaxOctave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_MaxOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings.get_ScalesSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*> (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::get_ScalesSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_ScalesSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentSettings::*)()>(&::VROSC::InstrumentSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1710938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::PatchGroup>& VROSC::InstrumentSettings::__cordl_internal_get__patches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patches;
}
constexpr ::UnityW<::VROSC::PatchGroup> const& VROSC::InstrumentSettings::__cordl_internal_get__patches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patches;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__patches(::UnityW<::VROSC::PatchGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____patches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::InstrumentSettings::__cordl_internal_get__startingPatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingPatch;
}
constexpr int32_t const& VROSC::InstrumentSettings::__cordl_internal_get__startingPatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingPatch;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__startingPatch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingPatch = value;
}
constexpr int32_t& VROSC::InstrumentSettings::__cordl_internal_get__startChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startChannel;
}
constexpr int32_t const& VROSC::InstrumentSettings::__cordl_internal_get__startChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startChannel;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__startChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startChannel = value;
}
constexpr int32_t& VROSC::InstrumentSettings::__cordl_internal_get__startOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startOctave;
}
constexpr int32_t const& VROSC::InstrumentSettings::__cordl_internal_get__startOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startOctave;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__startOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startOctave = value;
}
constexpr int32_t& VROSC::InstrumentSettings::__cordl_internal_get__minOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minOctave;
}
constexpr int32_t const& VROSC::InstrumentSettings::__cordl_internal_get__minOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minOctave;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__minOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minOctave = value;
}
constexpr int32_t& VROSC::InstrumentSettings::__cordl_internal_get__maxOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOctave;
}
constexpr int32_t const& VROSC::InstrumentSettings::__cordl_internal_get__maxOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOctave;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__maxOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxOctave = value;
}
constexpr ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>& VROSC::InstrumentSettings::__cordl_internal_get__scalesSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalesSettings;
}
constexpr ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*> const& VROSC::InstrumentSettings::__cordl_internal_get__scalesSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalesSettings;
}
constexpr void VROSC::InstrumentSettings::__cordl_internal_set__scalesSettings(::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scalesSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::PatchGroup> VROSC::InstrumentSettings::get_PatchGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_PatchGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::PatchGroup>, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentSettings::get_StartingPatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_StartingPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentSettings::get_StartingChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_StartingChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentSettings::get_StartOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_StartOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentSettings::get_MinOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_MinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentSettings::get_MaxOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_MaxOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*> VROSC::InstrumentSettings::get_ScalesSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        "get_ScalesSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>, false>(this, ___internal_method);
}
inline void VROSC::InstrumentSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentSettings* VROSC::InstrumentSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentSettings::InstrumentSettings()   {
}
