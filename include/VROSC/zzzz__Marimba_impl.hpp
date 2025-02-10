#pragma once
// IWYU pragma private; include "VROSC/Marimba.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Marimba_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__MarimbaDataController_def.hpp"
#include "VROSC/zzzz__MarimbaPad_def.hpp"
#include "VROSC/zzzz__MarimbaPlayer_def.hpp"
#include "VROSC/zzzz__Marimba_def.hpp"
#include "VROSC/zzzz__NoteNode_def.hpp"
#include "VROSC/zzzz__ScaleNode_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::Marimba_InputDeviceCooldown._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba_InputDeviceCooldown::*)()>(&::VROSC::Marimba_InputDeviceCooldown::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1793700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba_InputDeviceCooldown*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::Marimba_InputDeviceCooldown::__cordl_internal_get_InputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputDevice;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::Marimba_InputDeviceCooldown::__cordl_internal_get_InputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputDevice;
}
constexpr void VROSC::Marimba_InputDeviceCooldown::__cordl_internal_set_InputDevice(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::Marimba_InputDeviceCooldown::__cordl_internal_get_Cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cooldown;
}
constexpr float_t const& VROSC::Marimba_InputDeviceCooldown::__cordl_internal_get_Cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cooldown;
}
constexpr void VROSC::Marimba_InputDeviceCooldown::__cordl_internal_set_Cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cooldown = value;
}
inline void VROSC::Marimba_InputDeviceCooldown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba_InputDeviceCooldown*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Marimba_InputDeviceCooldown* VROSC::Marimba_InputDeviceCooldown::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Marimba_InputDeviceCooldown*>());
}
// Ctor Parameters []
constexpr ::VROSC::Marimba_InputDeviceCooldown::Marimba_InputDeviceCooldown()   {
}
//  Writing Method size for method: ::VROSC::Marimba___c__DisplayClass65_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba___c__DisplayClass65_0::*)()>(&::VROSC::Marimba___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1793e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba___c__DisplayClass65_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba___c__DisplayClass65_0._SortPadsByDistanceFromPad_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Marimba___c__DisplayClass65_0::*)(::VROSC::MarimbaPad*)>(&::VROSC::Marimba___c__DisplayClass65_0::_SortPadsByDistanceFromPad_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1794054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba___c__DisplayClass65_0*>::get(),
                        "<SortPadsByDistanceFromPad>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::MarimbaPad>& VROSC::Marimba___c__DisplayClass65_0::__cordl_internal_get_pad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pad;
}
constexpr ::UnityW<::VROSC::MarimbaPad> const& VROSC::Marimba___c__DisplayClass65_0::__cordl_internal_get_pad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pad;
}
constexpr void VROSC::Marimba___c__DisplayClass65_0::__cordl_internal_set_pad(::UnityW<::VROSC::MarimbaPad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::Marimba___c__DisplayClass65_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba___c__DisplayClass65_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::Marimba___c__DisplayClass65_0::_SortPadsByDistanceFromPad_b__0(::VROSC::MarimbaPad*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba___c__DisplayClass65_0*>::get(),
                        "<SortPadsByDistanceFromPad>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, p);
}
inline ::VROSC::Marimba___c__DisplayClass65_0* VROSC::Marimba___c__DisplayClass65_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Marimba___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::Marimba___c__DisplayClass65_0::Marimba___c__DisplayClass65_0()   {
}
//  Writing Method size for method: ::VROSC::Marimba.get_AnimationPower
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Marimba::*)()>(&::VROSC::Marimba::get_AnimationPower)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1790a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_AnimationPower",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.get_AnimationTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Marimba::*)()>(&::VROSC::Marimba::get_AnimationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1790a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_AnimationTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.get_SpawnedPads
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* (::VROSC::Marimba::*)()>(&::VROSC::Marimba::get_SpawnedPads)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1790a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_SpawnedPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.set_SpawnedPads
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*)>(&::VROSC::Marimba::set_SpawnedPads)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1790a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "set_SpawnedPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.get__dataController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MarimbaDataController* (::VROSC::Marimba::*)()>(&::VROSC::Marimba::get__dataController)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1790a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get__dataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.get_AssigningSequencerSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Marimba::*)()>(&::VROSC::Marimba::get_AssigningSequencerSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1790b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_AssigningSequencerSteps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.set_AssigningSequencerSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(bool)>(&::VROSC::Marimba::set_AssigningSequencerSteps)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1790b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "set_AssigningSequencerSteps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.get_SustainedPlayers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>* (::VROSC::Marimba::*)()>(&::VROSC::Marimba::get_SustainedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1790b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_SustainedPlayers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1790b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1790c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::OnDestroy)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x17913ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::OnEnable)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1791600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::OnDisable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1791794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1791968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::LateUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1791a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.CalculatePadDistances
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::CalculatePadDistances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1791b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CalculatePadDistances",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.SpawnPads
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::SpawnPads)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x1790de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "SpawnPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.DestroyPads
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::DestroyPads)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1791fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "DestroyPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.ReassignNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(int32_t)>(&::VROSC::Marimba::ReassignNotes)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1792178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "ReassignNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.CalculateNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Marimba::*)(int32_t, int32_t)>(&::VROSC::Marimba::CalculateNote)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1791c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CalculateNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.ButtonBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::Marimba::ButtonBegin)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17922ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "ButtonBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.ButtonEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::Marimba::ButtonEnd)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17923d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "ButtonEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.UpdateSequencerAssignState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::UpdateSequencerAssignState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1791ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "UpdateSequencerAssignState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.EnableSequencerAssigning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::EnableSequencerAssigning)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x179247c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "EnableSequencerAssigning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.DisableSequencerAssigning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::DisableSequencerAssigning)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x179129c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "DisableSequencerAssigning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.AssignSequenceStep
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::MarimbaPad*)>(&::VROSC::Marimba::AssignSequenceStep)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x179263c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "AssignSequenceStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.LoadSequenceSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::LoadSequenceSteps)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x1792a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "LoadSequenceSteps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.CountUpSequenceStep
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::CountUpSequenceStep)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17931e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CountUpSequenceStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.GetNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::VROSC::Marimba::*)(int32_t)>(&::VROSC::Marimba::GetNotes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1793270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "GetNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.IsInCooldown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Marimba::*)(::VROSC::InputDevice*)>(&::VROSC::Marimba::IsInCooldown)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x17933b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "IsInCooldown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.PadPlayed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::MarimbaPlayer*, ::VROSC::InputDevice*)>(&::VROSC::Marimba::PadPlayed)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1793558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "PadPlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.CountDownCooldowns
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::CountDownCooldowns)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x179196c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CountDownCooldowns",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.GetLastHitPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::MarimbaPlayer> (::VROSC::Marimba::*)(::VROSC::InputDevice*)>(&::VROSC::Marimba::GetLastHitPlayer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1793708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "GetLastHitPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::UserDataControllers*)>(&::VROSC::Marimba::UserDataLoaded)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x179379c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.StartAnimatingSecondaryNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::InputDevice*, ::VROSC::MarimbaPad*, int32_t, float_t, double_t)>(&::VROSC::Marimba::StartAnimatingSecondaryNote)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x179388c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "StartAnimatingSecondaryNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.StopAnimatingSecondaryNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::InputDevice*, ::VROSC::MarimbaPad*, int32_t)>(&::VROSC::Marimba::StopAnimatingSecondaryNote)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1793c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "StopAnimatingSecondaryNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba.SortPadsByDistanceFromPad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)(::VROSC::MarimbaPad*)>(&::VROSC::Marimba::SortPadsByDistanceFromPad)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1793a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "SortPadsByDistanceFromPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Marimba._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Marimba::*)()>(&::VROSC::Marimba::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1793e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::MarimbaPad>& VROSC::Marimba::__cordl_internal_get__prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr ::UnityW<::VROSC::MarimbaPad> const& VROSC::Marimba::__cordl_internal_get__prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr void VROSC::Marimba::__cordl_internal_set__prefab(::UnityW<::VROSC::MarimbaPad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SynthController>& VROSC::Marimba::__cordl_internal_get__instrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr ::UnityW<::VROSC::SynthController> const& VROSC::Marimba::__cordl_internal_get__instrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr void VROSC::Marimba::__cordl_internal_set__instrument(::UnityW<::VROSC::SynthController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ScaleNode>& VROSC::Marimba::__cordl_internal_get__scaleNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleNode;
}
constexpr ::UnityW<::VROSC::ScaleNode> const& VROSC::Marimba::__cordl_internal_get__scaleNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleNode;
}
constexpr void VROSC::Marimba::__cordl_internal_set__scaleNode(::UnityW<::VROSC::ScaleNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteNode>& VROSC::Marimba::__cordl_internal_get__startNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNote;
}
constexpr ::UnityW<::VROSC::NoteNode> const& VROSC::Marimba::__cordl_internal_get__startNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNote;
}
constexpr void VROSC::Marimba::__cordl_internal_set__startNote(::UnityW<::VROSC::NoteNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& VROSC::Marimba::__cordl_internal_get__sustainCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sustainCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& VROSC::Marimba::__cordl_internal_get__sustainCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sustainCollider;
}
constexpr void VROSC::Marimba::__cordl_internal_set__sustainCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sustainCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::Marimba::__cordl_internal_get__animationPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationPower;
}
constexpr float_t const& VROSC::Marimba::__cordl_internal_get__animationPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationPower;
}
constexpr void VROSC::Marimba::__cordl_internal_set__animationPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationPower = value;
}
constexpr float_t& VROSC::Marimba::__cordl_internal_get__animationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationTime;
}
constexpr float_t const& VROSC::Marimba::__cordl_internal_get__animationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationTime;
}
constexpr void VROSC::Marimba::__cordl_internal_set__animationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*& VROSC::Marimba::__cordl_internal_get__SpawnedPads_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnedPads_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* const& VROSC::Marimba::__cordl_internal_get__SpawnedPads_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnedPads_k__BackingField;
}
constexpr void VROSC::Marimba::__cordl_internal_set__SpawnedPads_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SpawnedPads_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Marimba::__cordl_internal_get__numRows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numRows;
}
constexpr int32_t const& VROSC::Marimba::__cordl_internal_get__numRows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numRows;
}
constexpr void VROSC::Marimba::__cordl_internal_set__numRows(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numRows = value;
}
constexpr int32_t& VROSC::Marimba::__cordl_internal_get__padsPerRow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padsPerRow;
}
constexpr int32_t const& VROSC::Marimba::__cordl_internal_get__padsPerRow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padsPerRow;
}
constexpr void VROSC::Marimba::__cordl_internal_set__padsPerRow(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____padsPerRow = value;
}
constexpr float_t& VROSC::Marimba::__cordl_internal_get__padDiameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padDiameter;
}
constexpr float_t const& VROSC::Marimba::__cordl_internal_get__padDiameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padDiameter;
}
constexpr void VROSC::Marimba::__cordl_internal_set__padDiameter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____padDiameter = value;
}
constexpr float_t& VROSC::Marimba::__cordl_internal_get__horizontalPadDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalPadDistance;
}
constexpr float_t const& VROSC::Marimba::__cordl_internal_get__horizontalPadDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalPadDistance;
}
constexpr void VROSC::Marimba::__cordl_internal_set__horizontalPadDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalPadDistance = value;
}
constexpr float_t& VROSC::Marimba::__cordl_internal_get__verticalPadDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalPadDistance;
}
constexpr float_t const& VROSC::Marimba::__cordl_internal_get__verticalPadDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalPadDistance;
}
constexpr void VROSC::Marimba::__cordl_internal_set__verticalPadDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalPadDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*& VROSC::Marimba::__cordl_internal_get__distanceSortedPads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceSortedPads;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* const& VROSC::Marimba::__cordl_internal_get__distanceSortedPads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceSortedPads;
}
constexpr void VROSC::Marimba::__cordl_internal_set__distanceSortedPads(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____distanceSortedPads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*& VROSC::Marimba::__cordl_internal_get__holdingXADevices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdingXADevices;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>* const& VROSC::Marimba::__cordl_internal_get__holdingXADevices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdingXADevices;
}
constexpr void VROSC::Marimba::__cordl_internal_set__holdingXADevices(::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____holdingXADevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::Marimba::__cordl_internal_get__AssigningSequencerSteps_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AssigningSequencerSteps_k__BackingField;
}
constexpr bool const& VROSC::Marimba::__cordl_internal_get__AssigningSequencerSteps_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AssigningSequencerSteps_k__BackingField;
}
constexpr void VROSC::Marimba::__cordl_internal_set__AssigningSequencerSteps_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AssigningSequencerSteps_k__BackingField = value;
}
constexpr int32_t& VROSC::Marimba::__cordl_internal_get__currentSequenceStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSequenceStep;
}
constexpr int32_t const& VROSC::Marimba::__cordl_internal_get__currentSequenceStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSequenceStep;
}
constexpr void VROSC::Marimba::__cordl_internal_set__currentSequenceStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSequenceStep = value;
}
constexpr int32_t& VROSC::Marimba::__cordl_internal_get__currentAssignStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAssignStep;
}
constexpr int32_t const& VROSC::Marimba::__cordl_internal_get__currentAssignStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAssignStep;
}
constexpr void VROSC::Marimba::__cordl_internal_set__currentAssignStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentAssignStep = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>*& VROSC::Marimba::__cordl_internal_get__lastHitPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHitPlayers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>* const& VROSC::Marimba::__cordl_internal_get__lastHitPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHitPlayers;
}
constexpr void VROSC::Marimba::__cordl_internal_set__lastHitPlayers(::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastHitPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>*& VROSC::Marimba::__cordl_internal_get__inputDeviceCooldowns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDeviceCooldowns;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>* const& VROSC::Marimba::__cordl_internal_get__inputDeviceCooldowns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDeviceCooldowns;
}
constexpr void VROSC::Marimba::__cordl_internal_set__inputDeviceCooldowns(::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputDeviceCooldowns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*& VROSC::Marimba::__cordl_internal_get__sustainedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sustainedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>* const& VROSC::Marimba::__cordl_internal_get__sustainedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sustainedPlayers;
}
constexpr void VROSC::Marimba::__cordl_internal_set__sustainedPlayers(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sustainedPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::Marimba::__cordl_internal_get_OnInstrumentLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInstrumentLoaded;
}
constexpr ::System::Action* const& VROSC::Marimba::__cordl_internal_get_OnInstrumentLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInstrumentLoaded;
}
constexpr void VROSC::Marimba::__cordl_internal_set_OnInstrumentLoaded(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInstrumentLoaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::Marimba::get_AnimationPower()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_AnimationPower",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::Marimba::get_AnimationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_AnimationTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* VROSC::Marimba::get_SpawnedPads()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_SpawnedPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*, false>(this, ___internal_method);
}
inline void VROSC::Marimba::set_SpawnedPads(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "set_SpawnedPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::MarimbaDataController* VROSC::Marimba::get__dataController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get__dataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MarimbaDataController*, false>(this, ___internal_method);
}
inline bool VROSC::Marimba::get_AssigningSequencerSteps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_AssigningSequencerSteps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::Marimba::set_AssigningSequencerSteps(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "set_AssigningSequencerSteps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>* VROSC::Marimba::get_SustainedPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "get_SustainedPlayers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*, false>(this, ___internal_method);
}
inline void VROSC::Marimba::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::CalculatePadDistances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CalculatePadDistances",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::SpawnPads()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "SpawnPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::DestroyPads()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "DestroyPads",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::ReassignNotes(int32_t  newScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "ReassignNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newScale);
}
inline int32_t VROSC::Marimba::CalculateNote(int32_t  row, int32_t  pad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CalculateNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, row, pad);
}
inline void VROSC::Marimba::ButtonBegin(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  triggerButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "ButtonBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, triggerButton);
}
inline void VROSC::Marimba::ButtonEnd(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  triggerButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "ButtonEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, triggerButton);
}
inline void VROSC::Marimba::UpdateSequencerAssignState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "UpdateSequencerAssignState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::EnableSequencerAssigning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "EnableSequencerAssigning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::DisableSequencerAssigning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "DisableSequencerAssigning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::AssignSequenceStep(::VROSC::MarimbaPad*  pad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "AssignSequenceStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pad);
}
inline void VROSC::Marimba::LoadSequenceSteps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "LoadSequenceSteps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Marimba::CountUpSequenceStep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CountUpSequenceStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> VROSC::Marimba::GetNotes(int32_t  referenceNote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "GetNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(this, ___internal_method, referenceNote);
}
inline bool VROSC::Marimba::IsInCooldown(::VROSC::InputDevice*  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "IsInCooldown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputDevice);
}
inline void VROSC::Marimba::PadPlayed(::VROSC::MarimbaPlayer*  marimbaPlayer, ::VROSC::InputDevice*  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "PadPlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, marimbaPlayer, inputDevice);
}
inline void VROSC::Marimba::CountDownCooldowns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "CountDownCooldowns",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::MarimbaPlayer> VROSC::Marimba::GetLastHitPlayer(::VROSC::InputDevice*  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "GetLastHitPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::MarimbaPlayer>, false>(this, ___internal_method, inputDevice);
}
inline void VROSC::Marimba::UserDataLoaded(::VROSC::UserDataControllers*  userDataControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userDataControllers);
}
inline void VROSC::Marimba::StartAnimatingSecondaryNote(::VROSC::InputDevice*  device, ::VROSC::MarimbaPad*  pad, int32_t  noteNumber, float_t  power, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "StartAnimatingSecondaryNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, pad, noteNumber, power, predictedDspTime);
}
inline void VROSC::Marimba::StopAnimatingSecondaryNote(::VROSC::InputDevice*  device, ::VROSC::MarimbaPad*  pad, int32_t  noteNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "StopAnimatingSecondaryNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, pad, noteNumber);
}
inline void VROSC::Marimba::SortPadsByDistanceFromPad(::VROSC::MarimbaPad*  pad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        "SortPadsByDistanceFromPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MarimbaPad*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pad);
}
inline void VROSC::Marimba::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Marimba*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Marimba* VROSC::Marimba::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Marimba*>());
}
// Ctor Parameters []
constexpr ::VROSC::Marimba::Marimba()   {
}
