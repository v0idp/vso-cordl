#pragma once
// IWYU pragma private; include "VROSC/LoopPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ILoopGroupListItem_impl.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "VROSC/zzzz__InteractionDisabler_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigOverride_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopPlayerAutoMover_def.hpp"
#include "VROSC/zzzz__LoopPlayerMover_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackController_def.hpp"
#include "VROSC/zzzz__LoopPlayerUI_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__Loop_def.hpp"
#include "VROSC/zzzz__PlaybackProgressUIData_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayer___c__DisplayClass51_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer___c__DisplayClass51_0::*)()>(&::VROSC::LoopPlayer___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a0344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer___c__DisplayClass51_0._Setup_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer___c__DisplayClass51_0::*)()>(&::VROSC::LoopPlayer___c__DisplayClass51_0::_Setup_b__0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18a1220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer___c__DisplayClass51_0*>::get(),
                        "<Setup>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopPlaybackConfig*& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::VROSC::LoopPlaybackConfig* const& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_set_config(::VROSC::LoopPlaybackConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___config)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_playImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playImmediately;
}
constexpr bool const& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_playImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playImmediately;
}
constexpr void VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_set_playImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playImmediately = value;
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopStation;
}
constexpr void VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_set_loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_trackId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackId;
}
constexpr ::StringW const& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_trackId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackId;
}
constexpr void VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_set_trackId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void VROSC::LoopPlayer___c__DisplayClass51_0::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopPlayer___c__DisplayClass51_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer___c__DisplayClass51_0::_Setup_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer___c__DisplayClass51_0*>::get(),
                        "<Setup>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayer___c__DisplayClass51_0* VROSC::LoopPlayer___c__DisplayClass51_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayer___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayer___c__DisplayClass51_0::LoopPlayer___c__DisplayClass51_0()   {
}
//  Writing Method size for method: ::VROSC::LoopPlayer.get_IsSoloActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_IsSoloActive)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x189f4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsSoloActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_IsMuteActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_IsMuteActive)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x189f4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsMuteActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_IsPlaying)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x189dedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_RectTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_RectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_RectTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_AutoMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayerAutoMover> (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_AutoMover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_AutoMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_UI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayerUI> (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_UI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_UI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_Playback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayerPlaybackController> (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_Playback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_Playback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_LoopStation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopStation> (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_LoopStation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.set_LoopStation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::VROSC::LoopStation*)>(&::VROSC::LoopPlayer::set_LoopStation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_BelongsToGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopStationGroup> (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_BelongsToGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_BelongsToGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.set_BelongsToGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::VROSC::LoopStationGroup*)>(&::VROSC::LoopPlayer::set_BelongsToGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_BelongsToGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_PositionInGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_PositionInGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_PositionInGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.set_PositionInGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(int32_t)>(&::VROSC::LoopPlayer::set_PositionInGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_PositionInGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_Loop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Loop* (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_Loop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x189f5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_Loop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_InstrumentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_InstrumentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_InstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.set_InstrumentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::StringW)>(&::VROSC::LoopPlayer::set_InstrumentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_InstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_IsGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_IsGrabbed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x189f5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.get_TrackID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::get_TrackID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_TrackID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.set_TrackID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::StringW)>(&::VROSC::LoopPlayer::set_TrackID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189f600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_TrackID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::Awake)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x189f608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x189fa90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::VROSC::LoopStationGroup*, int32_t)>(&::VROSC::LoopPlayer::SetGroup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x189ff18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetPositionInGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(int32_t)>(&::VROSC::LoopPlayer::SetPositionInGroup)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x189ff60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetPositionInGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::VROSC::LoopStation*, ::StringW, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, ::UnityEngine::Color, bool, bool, ::System::Action*)>(&::VROSC::LoopPlayer::Setup)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18a00b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetUserSyncOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(int32_t)>(&::VROSC::LoopPlayer::SetUserSyncOffset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18a092c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetUserSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetUserPlayLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(int32_t)>(&::VROSC::LoopPlayer::SetUserPlayLength)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18a0950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetUserPlayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.TogglePlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::TogglePlay)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a0a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "TogglePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.ToggleMute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::ToggleMute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18a0aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "ToggleMute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.ToggleSolo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::ToggleSolo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18a0cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "ToggleSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.DeleteLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::DeleteLoop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18a0ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "DeleteLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.UpdatePlayConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::VROSC::LoopPlaybackConfigOverride*)>(&::VROSC::LoopPlayer::UpdatePlayConfig)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18a0d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "UpdatePlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::VROSC::LoopPlaybackConfig*, bool)>(&::VROSC::LoopPlayer::Play)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18a0d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.ResumePlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::ResumePlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a0dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "ResumePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::Stop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a0dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.UpdateAudioSourceVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::UpdateAudioSourceVolume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18a0ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "UpdateAudioSourceVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetInteractableDuringAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::SetInteractableDuringAnimation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18a0eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetInteractableDuringAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(float_t)>(&::VROSC::LoopPlayer::SetVolume)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18a0f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.OnVolumeSliderChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(float_t)>(&::VROSC::LoopPlayer::OnVolumeSliderChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18a102c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "OnVolumeSliderChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetIsMuted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::SetIsMuted)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18a1088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetIsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetMutedBySolo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(bool)>(&::VROSC::LoopPlayer::SetMutedBySolo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a10e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetMutedBySolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.GetPlaybackProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlaybackProgressUIData (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::GetPlaybackProgress)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18a110c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "GetPlaybackProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.SetDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(::StringW)>(&::VROSC::LoopPlayer::SetDisplayName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18a1180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer.UpdateLoopPlaybackValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)(double_t)>(&::VROSC::LoopPlayer::UpdateLoopPlaybackValues)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a0910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "UpdateLoopPlaybackValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayer::*)()>(&::VROSC::LoopPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::LoopPlayer::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::LoopPlayer::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerUI>& VROSC::LoopPlayer::__cordl_internal_get__ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr ::UnityW<::VROSC::LoopPlayerUI> const& VROSC::LoopPlayer::__cordl_internal_get__ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__ui(::UnityW<::VROSC::LoopPlayerUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ui)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InteractionDisabler>& VROSC::LoopPlayer::__cordl_internal_get__disabler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabler;
}
constexpr ::UnityW<::VROSC::InteractionDisabler> const& VROSC::LoopPlayer::__cordl_internal_get__disabler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabler;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__disabler(::UnityW<::VROSC::InteractionDisabler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController>& VROSC::LoopPlayer::__cordl_internal_get__playBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBack;
}
constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController> const& VROSC::LoopPlayer::__cordl_internal_get__playBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBack;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__playBack(::UnityW<::VROSC::LoopPlayerPlaybackController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playBack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerMover>& VROSC::LoopPlayer::__cordl_internal_get__mover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mover;
}
constexpr ::UnityW<::VROSC::LoopPlayerMover> const& VROSC::LoopPlayer::__cordl_internal_get__mover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mover;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__mover(::UnityW<::VROSC::LoopPlayerMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerAutoMover>& VROSC::LoopPlayer::__cordl_internal_get__autoMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoMover;
}
constexpr ::UnityW<::VROSC::LoopPlayerAutoMover> const& VROSC::LoopPlayer::__cordl_internal_get__autoMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoMover;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__autoMover(::UnityW<::VROSC::LoopPlayerAutoMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____autoMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopPlayer::__cordl_internal_get__LoopStation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopStation_k__BackingField;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopPlayer::__cordl_internal_get__LoopStation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopStation_k__BackingField;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__LoopStation_k__BackingField(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LoopStation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& VROSC::LoopPlayer::__cordl_internal_get_OnDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDelete;
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& VROSC::LoopPlayer::__cordl_internal_get_OnDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDelete;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set_OnDelete(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDelete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& VROSC::LoopPlayer::__cordl_internal_get_OnSoloChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSoloChanged;
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& VROSC::LoopPlayer::__cordl_internal_get_OnSoloChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSoloChanged;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set_OnSoloChanged(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSoloChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& VROSC::LoopPlayer::__cordl_internal_get_OnGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabbed;
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& VROSC::LoopPlayer::__cordl_internal_get_OnGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabbed;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set_OnGrabbed(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnGrabbed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationGroup>& VROSC::LoopPlayer::__cordl_internal_get__BelongsToGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BelongsToGroup_k__BackingField;
}
constexpr ::UnityW<::VROSC::LoopStationGroup> const& VROSC::LoopPlayer::__cordl_internal_get__BelongsToGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BelongsToGroup_k__BackingField;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__BelongsToGroup_k__BackingField(::UnityW<::VROSC::LoopStationGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BelongsToGroup_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopPlayer::__cordl_internal_get__PositionInGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PositionInGroup_k__BackingField;
}
constexpr int32_t const& VROSC::LoopPlayer::__cordl_internal_get__PositionInGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PositionInGroup_k__BackingField;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__PositionInGroup_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PositionInGroup_k__BackingField = value;
}
constexpr ::StringW& VROSC::LoopPlayer::__cordl_internal_get__InstrumentName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstrumentName_k__BackingField;
}
constexpr ::StringW const& VROSC::LoopPlayer::__cordl_internal_get__InstrumentName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstrumentName_k__BackingField;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__InstrumentName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InstrumentName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopPlayer::__cordl_internal_get__TrackID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackID_k__BackingField;
}
constexpr ::StringW const& VROSC::LoopPlayer::__cordl_internal_get__TrackID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackID_k__BackingField;
}
constexpr void VROSC::LoopPlayer::__cordl_internal_set__TrackID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrackID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::LoopPlayer::get_IsSoloActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsSoloActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayer::get_IsMuteActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsMuteActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayer::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> VROSC::LoopPlayer::get_RectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_RectTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::LoopPlayerAutoMover> VROSC::LoopPlayer::get_AutoMover()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_AutoMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayerAutoMover>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::LoopPlayerUI> VROSC::LoopPlayer::get_UI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_UI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayerUI>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::LoopPlayerPlaybackController> VROSC::LoopPlayer::get_Playback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_Playback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayerPlaybackController>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::LoopStation> VROSC::LoopPlayer::get_LoopStation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopStation>, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::set_LoopStation(::VROSC::LoopStation*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::LoopStationGroup> VROSC::LoopPlayer::get_BelongsToGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_BelongsToGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopStationGroup>, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::set_BelongsToGroup(::VROSC::LoopStationGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_BelongsToGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::LoopPlayer::get_PositionInGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_PositionInGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::set_PositionInGroup(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_PositionInGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Loop* VROSC::LoopPlayer::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_Loop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Loop*, false>(this, ___internal_method);
}
inline ::StringW VROSC::LoopPlayer::get_InstrumentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_InstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::set_InstrumentName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_InstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::LoopPlayer::get_IsGrabbed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_IsGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW VROSC::LoopPlayer::get_TrackID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "get_TrackID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::set_TrackID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "set_TrackID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::LoopPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::SetGroup(::VROSC::LoopStationGroup*  loopStationGroup, int32_t  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStationGroup, position);
}
inline void VROSC::LoopPlayer::SetPositionInGroup(int32_t  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetPositionInGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VROSC::LoopPlayer::Setup(::VROSC::LoopStation*  loopStation, ::StringW  trackId, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::UnityEngine::Color  color, bool  playImmediately, bool  overdub, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation, trackId, audioData, color, playImmediately, overdub, callback);
}
inline void VROSC::LoopPlayer::SetUserSyncOffset(int32_t  userOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetUserSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userOffset);
}
inline void VROSC::LoopPlayer::SetUserPlayLength(int32_t  playLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetUserPlayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playLength);
}
inline void VROSC::LoopPlayer::TogglePlay(bool  play)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "TogglePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, play);
}
inline void VROSC::LoopPlayer::ToggleMute(bool  mute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "ToggleMute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mute);
}
inline void VROSC::LoopPlayer::ToggleSolo(bool  soloOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "ToggleSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soloOn);
}
inline void VROSC::LoopPlayer::DeleteLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "DeleteLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride*  playbackConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "UpdatePlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playbackConfig);
}
inline void VROSC::LoopPlayer::Play(::VROSC::LoopPlaybackConfig*  config, bool  isResuming)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, isResuming);
}
inline void VROSC::LoopPlayer::ResumePlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "ResumePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::Stop(bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instant);
}
inline void VROSC::LoopPlayer::UpdateAudioSourceVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "UpdateAudioSourceVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::SetInteractableDuringAnimation(bool  interactable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetInteractableDuringAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactable);
}
inline void VROSC::LoopPlayer::SetVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopPlayer::OnVolumeSliderChanged(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "OnVolumeSliderChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopPlayer::SetIsMuted(bool  isMuted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetIsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMuted);
}
inline void VROSC::LoopPlayer::SetMutedBySolo(bool  isMutedBySolo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetMutedBySolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMutedBySolo);
}
inline ::VROSC::PlaybackProgressUIData VROSC::LoopPlayer::GetPlaybackProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "GetPlaybackProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PlaybackProgressUIData, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayer::SetDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "SetDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline void VROSC::LoopPlayer::UpdateLoopPlaybackValues(double_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        "UpdateLoopPlaybackValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm);
}
inline void VROSC::LoopPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayer* VROSC::LoopPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayer*>());
}
/// @brief Convert operator to "::VROSC::ILoopGroupListItem"
constexpr  VROSC::LoopPlayer::operator ::VROSC::ILoopGroupListItem*() noexcept {
return static_cast<::VROSC::ILoopGroupListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::ILoopGroupListItem"
constexpr ::VROSC::ILoopGroupListItem* VROSC::LoopPlayer::i___VROSC__ILoopGroupListItem() noexcept {
return static_cast<::VROSC::ILoopGroupListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayer::LoopPlayer()   {
}
