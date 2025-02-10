#pragma once
// IWYU pragma private; include "VROSC/LaunchpadSpawner.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__Grabable_impl.hpp"
#include "VROSC/zzzz__LaunchpadSpawner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__GrabData_def.hpp"
#include "VROSC/zzzz__Launchpad_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.set_CurrentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::StringW)>(&::VROSC::LaunchpadSpawner::set_CurrentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1716548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "set_CurrentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.get_CurrentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LaunchpadSpawner::*)()>(&::VROSC::LaunchpadSpawner::get_CurrentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1716550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "get_CurrentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.set_CurrentColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::UnityEngine::Color)>(&::VROSC::LaunchpadSpawner::set_CurrentColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1716558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "set_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.get_CurrentColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::LaunchpadSpawner::*)()>(&::VROSC::LaunchpadSpawner::get_CurrentColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1716564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "get_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::StringW, ::UnityEngine::Transform*, ::StringW)>(&::VROSC::LaunchpadSpawner::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1716570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.Grab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::VROSC::GrabData*, bool)>(&::VROSC::LaunchpadSpawner::Grab)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x17165b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.SpawnLaunchpad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::Launchpad> (::VROSC::LaunchpadSpawner::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::VROSC::LaunchpadSpawner::SpawnLaunchpad)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x17167b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "SpawnLaunchpad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.LaunchPadHit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::VROSC::Launchpad*)>(&::VROSC::LaunchpadSpawner::LaunchPadHit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1716af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LaunchPadHit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Launchpad*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.LaunchPadMoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::VROSC::Launchpad*)>(&::VROSC::LaunchpadSpawner::LaunchPadMoved)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1716b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LaunchPadMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Launchpad*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.LaunchPadDeleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::VROSC::Launchpad*)>(&::VROSC::LaunchpadSpawner::LaunchPadDeleted)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1716b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LaunchPadDeleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Launchpad*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.LoadLaunchPad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::Launchpad> (::VROSC::LaunchpadSpawner::*)(::StringW, ::VROSC::TransformDataController*)>(&::VROSC::LaunchpadSpawner::LoadLaunchPad)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1716d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LoadLaunchPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.SetLaunchpadColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::UnityEngine::Color)>(&::VROSC::LaunchpadSpawner::SetLaunchpadColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1716e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "SetLaunchpadColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.SetLaunchpadDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)(::StringW)>(&::VROSC::LaunchpadSpawner::SetLaunchpadDisplayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1716598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "SetLaunchpadDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner.TearDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)()>(&::VROSC::LaunchpadSpawner::TearDown)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x1716e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "TearDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadSpawner::*)()>(&::VROSC::LaunchpadSpawner::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x171724c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Launchpad>& VROSC::LaunchpadSpawner::__cordl_internal_get__launchpadPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchpadPrefab;
}
constexpr ::UnityW<::VROSC::Launchpad> const& VROSC::LaunchpadSpawner::__cordl_internal_get__launchpadPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchpadPrefab;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__launchpadPrefab(::UnityW<::VROSC::Launchpad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____launchpadPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::LaunchpadSpawner::__cordl_internal_get__spawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::LaunchpadSpawner::__cordl_internal_get__spawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnPoint;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__spawnPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>*& VROSC::LaunchpadSpawner::__cordl_internal_get__spawnedLaunchPads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedLaunchPads;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>* const& VROSC::LaunchpadSpawner::__cordl_internal_get__spawnedLaunchPads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedLaunchPads;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__spawnedLaunchPads(::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnedLaunchPads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadCreated;
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadCreated;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set_OnLaunchPadCreated(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLaunchPadCreated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadMoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadMoved;
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadMoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadMoved;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set_OnLaunchPadMoved(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLaunchPadMoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadDeleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadDeleted;
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadDeleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadDeleted;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set_OnLaunchPadDeleted(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLaunchPadDeleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadHit;
}
constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& VROSC::LaunchpadSpawner::__cordl_internal_get_OnLaunchPadHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunchPadHit;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set_OnLaunchPadHit(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLaunchPadHit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Color>*& VROSC::LaunchpadSpawner::__cordl_internal_get_OnTargetColorChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTargetColorChanged;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& VROSC::LaunchpadSpawner::__cordl_internal_get_OnTargetColorChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTargetColorChanged;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set_OnTargetColorChanged(::System::Action_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnTargetColorChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::LaunchpadSpawner::__cordl_internal_get_OnTargetNameChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTargetNameChanged;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::LaunchpadSpawner::__cordl_internal_get_OnTargetNameChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTargetNameChanged;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set_OnTargetNameChanged(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnTargetNameChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LaunchpadSpawner::__cordl_internal_get__CurrentName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentName_k__BackingField;
}
constexpr ::StringW const& VROSC::LaunchpadSpawner::__cordl_internal_get__CurrentName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentName_k__BackingField;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__CurrentName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::LaunchpadSpawner::__cordl_internal_get__CurrentColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentColor_k__BackingField;
}
constexpr ::UnityEngine::Color const& VROSC::LaunchpadSpawner::__cordl_internal_get__CurrentColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentColor_k__BackingField;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__CurrentColor_k__BackingField(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentColor_k__BackingField = value;
}
constexpr ::StringW& VROSC::LaunchpadSpawner::__cordl_internal_get__targetID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetID;
}
constexpr ::StringW const& VROSC::LaunchpadSpawner::__cordl_internal_get__targetID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetID;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__targetID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::LaunchpadSpawner::__cordl_internal_get__launchPadParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchPadParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::LaunchpadSpawner::__cordl_internal_get__launchPadParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchPadParent;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__launchPadParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____launchPadParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Launchpad>& VROSC::LaunchpadSpawner::__cordl_internal_get__currentlyHeldLaunchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyHeldLaunchpad;
}
constexpr ::UnityW<::VROSC::Launchpad> const& VROSC::LaunchpadSpawner::__cordl_internal_get__currentlyHeldLaunchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyHeldLaunchpad;
}
constexpr void VROSC::LaunchpadSpawner::__cordl_internal_set__currentlyHeldLaunchpad(::UnityW<::VROSC::Launchpad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentlyHeldLaunchpad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LaunchpadSpawner::set_CurrentName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "set_CurrentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::LaunchpadSpawner::get_CurrentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "get_CurrentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::LaunchpadSpawner::set_CurrentColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "set_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color VROSC::LaunchpadSpawner::get_CurrentColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "get_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void VROSC::LaunchpadSpawner::Setup(::StringW  targetID, ::UnityEngine::Transform*  launchPadParent, ::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetID, launchPadParent, displayName);
}
inline void VROSC::LaunchpadSpawner::Grab(::VROSC::GrabData*  grabData, bool  grabbing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabData, grabbing);
}
inline ::UnityW<::VROSC::Launchpad> VROSC::LaunchpadSpawner::SpawnLaunchpad(::StringW  padID, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  localScale, bool  isNewLaunchpad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "SpawnLaunchpad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::Launchpad>, false>(this, ___internal_method, padID, position, rotation, localScale, isNewLaunchpad);
}
inline void VROSC::LaunchpadSpawner::LaunchPadHit(::VROSC::Launchpad*  launchpad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LaunchPadHit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Launchpad*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, launchpad);
}
inline void VROSC::LaunchpadSpawner::LaunchPadMoved(::VROSC::Launchpad*  launchpad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LaunchPadMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Launchpad*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, launchpad);
}
inline void VROSC::LaunchpadSpawner::LaunchPadDeleted(::VROSC::Launchpad*  launchpad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LaunchPadDeleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Launchpad*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, launchpad);
}
inline ::UnityW<::VROSC::Launchpad> VROSC::LaunchpadSpawner::LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "LoadLaunchPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::Launchpad>, false>(this, ___internal_method, padID, transformData);
}
inline void VROSC::LaunchpadSpawner::SetLaunchpadColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "SetLaunchpadColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::LaunchpadSpawner::SetLaunchpadDisplayName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "SetLaunchpadDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void VROSC::LaunchpadSpawner::TearDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        "TearDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LaunchpadSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LaunchpadSpawner* VROSC::LaunchpadSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LaunchpadSpawner*>());
}
// Ctor Parameters []
constexpr ::VROSC::LaunchpadSpawner::LaunchpadSpawner()   {
}
