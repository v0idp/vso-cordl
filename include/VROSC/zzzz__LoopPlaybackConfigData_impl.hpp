#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackConfigData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_impl.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigData_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlaybackConfigData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfigData::*)()>(&::VROSC::LoopPlaybackConfigData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18989a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfigData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfigData::*)(::VROSC::LoopPlaybackConfigData*)>(&::VROSC::LoopPlaybackConfigData::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x18989c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfigData.get_SyncMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig_Sync (::VROSC::LoopPlaybackConfigData::*)()>(&::VROSC::LoopPlaybackConfigData::get_SyncMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1898a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        "get_SyncMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfigData.get_Looping
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig_LoopMode (::VROSC::LoopPlaybackConfigData::*)()>(&::VROSC::LoopPlaybackConfigData::get_Looping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        "get_Looping",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfigData.get_RetriggeringOneshot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlaybackConfigData::*)()>(&::VROSC::LoopPlaybackConfigData::get_RetriggeringOneshot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1898a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        "get_RetriggeringOneshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync& VROSC::LoopPlaybackConfigData::__cordl_internal_get_StartMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMode;
}
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_StartMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMode;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_StartMode(::VROSC::LoopPlaybackConfig_TriggerSync  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartMode = value;
}
constexpr bool& VROSC::LoopPlaybackConfigData::__cordl_internal_get_IsStartModeLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsStartModeLocked;
}
constexpr bool const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_IsStartModeLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsStartModeLocked;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_IsStartModeLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsStartModeLocked = value;
}
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync& VROSC::LoopPlaybackConfigData::__cordl_internal_get_StopMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopMode;
}
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_StopMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopMode;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_StopMode(::VROSC::LoopPlaybackConfig_TriggerSync  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopMode = value;
}
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration& VROSC::LoopPlaybackConfigData::__cordl_internal_get_FadeIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadeIn;
}
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_FadeIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadeIn;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_FadeIn(::VROSC::LoopPlaybackConfig_FadeDuration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FadeIn = value;
}
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration& VROSC::LoopPlaybackConfigData::__cordl_internal_get_FadeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadeOut;
}
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_FadeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadeOut;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_FadeOut(::VROSC::LoopPlaybackConfig_FadeDuration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FadeOut = value;
}
constexpr bool& VROSC::LoopPlaybackConfigData::__cordl_internal_get_OneShot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OneShot;
}
constexpr bool const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_OneShot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OneShot;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_OneShot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OneShot = value;
}
constexpr bool& VROSC::LoopPlaybackConfigData::__cordl_internal_get_Retrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Retrigger;
}
constexpr bool const& VROSC::LoopPlaybackConfigData::__cordl_internal_get_Retrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Retrigger;
}
constexpr void VROSC::LoopPlaybackConfigData::__cordl_internal_set_Retrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Retrigger = value;
}
inline void VROSC::LoopPlaybackConfigData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlaybackConfigData::_ctor(::VROSC::LoopPlaybackConfigData*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::VROSC::LoopPlaybackConfig_Sync VROSC::LoopPlaybackConfigData::get_SyncMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        "get_SyncMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfig_Sync, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlaybackConfig_LoopMode VROSC::LoopPlaybackConfigData::get_Looping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        "get_Looping",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfig_LoopMode, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlaybackConfigData::get_RetriggeringOneshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfigData*>::get(),
                        "get_RetriggeringOneshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlaybackConfigData* VROSC::LoopPlaybackConfigData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlaybackConfigData*>());
}
inline ::VROSC::LoopPlaybackConfigData* VROSC::LoopPlaybackConfigData::New_ctor(::VROSC::LoopPlaybackConfigData*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlaybackConfigData*>(other));
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlaybackConfigData::LoopPlaybackConfigData()   {
}
