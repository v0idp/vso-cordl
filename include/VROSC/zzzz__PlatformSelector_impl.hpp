#pragma once
// IWYU pragma private; include "VROSC/PlatformSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__PlatformSelector_def.hpp"
#include "LIV/SDK/Unity/zzzz__LIV_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__HmdProfile_def.hpp"
#include "VROSC/zzzz__PlatformSelector_def.hpp"
#include "VROSC/zzzz__VRPlayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::PlatformSelector_Platform::PlatformSelector_Platform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::PlatformSelector_Platform::PlatformSelector_Platform()   {
}
constexpr ::VROSC::PlatformSelector_Platform  VROSC::PlatformSelector_Platform::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::PlatformSelector_Platform  VROSC::PlatformSelector_Platform::Oculus{static_cast<int32_t>(0x1)};
constexpr ::VROSC::PlatformSelector_Platform  VROSC::PlatformSelector_Platform::Steam{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::PlatformSelector_AgeCategory::PlatformSelector_AgeCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::PlatformSelector_AgeCategory::PlatformSelector_AgeCategory()   {
}
constexpr ::VROSC::PlatformSelector_AgeCategory  VROSC::PlatformSelector_AgeCategory::Unknown{static_cast<int32_t>(0x0)};
constexpr ::VROSC::PlatformSelector_AgeCategory  VROSC::PlatformSelector_AgeCategory::Child{static_cast<int32_t>(0x1)};
constexpr ::VROSC::PlatformSelector_AgeCategory  VROSC::PlatformSelector_AgeCategory::Teen{static_cast<int32_t>(0x2)};
constexpr ::VROSC::PlatformSelector_AgeCategory  VROSC::PlatformSelector_AgeCategory::Adult{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::PlatformSelector_DebugSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector_DebugSettings::*)()>(&::VROSC::PlatformSelector_DebugSettings::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x16f1e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector_DebugSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_DisableVR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableVR;
}
constexpr bool const& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_DisableVR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableVR;
}
constexpr void VROSC::PlatformSelector_DebugSettings::__cordl_internal_set_DisableVR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableVR = value;
}
constexpr ::StringW& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_DummyOculusId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DummyOculusId;
}
constexpr ::StringW const& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_DummyOculusId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DummyOculusId;
}
constexpr void VROSC::PlatformSelector_DebugSettings::__cordl_internal_set_DummyOculusId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DummyOculusId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_DummyUsername()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DummyUsername;
}
constexpr ::StringW const& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_DummyUsername() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DummyUsername;
}
constexpr void VROSC::PlatformSelector_DebugSettings::__cordl_internal_set_DummyUsername(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DummyUsername)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_PassEntitlements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PassEntitlements;
}
constexpr bool const& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_PassEntitlements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PassEntitlements;
}
constexpr void VROSC::PlatformSelector_DebugSettings::__cordl_internal_set_PassEntitlements(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PassEntitlements = value;
}
constexpr ::VROSC::PlatformSelector_Platform& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::VROSC::PlatformSelector_Platform const& VROSC::PlatformSelector_DebugSettings::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void VROSC::PlatformSelector_DebugSettings::__cordl_internal_set_Platform(::VROSC::PlatformSelector_Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
inline void VROSC::PlatformSelector_DebugSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector_DebugSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlatformSelector_DebugSettings* VROSC::PlatformSelector_DebugSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlatformSelector_DebugSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlatformSelector_DebugSettings::PlatformSelector_DebugSettings()   {
}
//  Writing Method size for method: ::VROSC::PlatformSelector.get_VRPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::VRPlayer> (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_VRPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f07e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_VRPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_VRPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::VROSC::VRPlayer*)>(&::VROSC::PlatformSelector::set_VRPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f07f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_VRPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VRPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_PlatformUID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_PlatformUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f07f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_PlatformUID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_PlatformUID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::StringW)>(&::VROSC::PlatformSelector::set_PlatformUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_PlatformUID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_PlatformUsername
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_PlatformUsername)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_PlatformUsername",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_PlatformUsername
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::StringW)>(&::VROSC::PlatformSelector::set_PlatformUsername)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_PlatformUsername",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_UserAgeCategory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlatformSelector_AgeCategory (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_UserAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_UserAgeCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_UserAgeCategory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::VROSC::PlatformSelector_AgeCategory)>(&::VROSC::PlatformSelector::set_UserAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_UserAgeCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlatformSelector_AgeCategory>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_HasPassedEntitlement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_HasPassedEntitlement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_HasPassedEntitlement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_HasPassedEntitlement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(bool)>(&::VROSC::PlatformSelector::set_HasPassedEntitlement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16f0830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_HasPassedEntitlement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_HasReceivedCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_HasReceivedCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_HasReceivedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_HasReceivedCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(bool)>(&::VROSC::PlatformSelector::set_HasReceivedCallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16f0844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_HasReceivedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_CurrentPlatform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlatformSelector_Platform (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_CurrentPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_CurrentPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_CurrentPlatform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::VROSC::PlatformSelector_Platform)>(&::VROSC::PlatformSelector::set_CurrentPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_CurrentPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlatformSelector_Platform>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.get_CurrentHmdProfile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::HmdProfile> (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::get_CurrentHmdProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_CurrentHmdProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.set_CurrentHmdProfile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::VROSC::HmdProfile*)>(&::VROSC::PlatformSelector::set_CurrentHmdProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_CurrentHmdProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HmdProfile*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::Setup)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x16f0870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::Update)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x16f1188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.SetCurrentHmdProfile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::SetCurrentHmdProfile)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x16f0bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SetCurrentHmdProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.GetOculusUserAgeCategory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*)>(&::VROSC::PlatformSelector::GetOculusUserAgeCategory)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x16f1298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "GetOculusUserAgeCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.SpawnChildPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::SpawnChildPlayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16f15c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SpawnChildPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.GetOculusUserCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::VROSC::PlatformSelector::GetOculusUserCallback)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x16f1780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "GetOculusUserCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.SpawnOculusPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(bool)>(&::VROSC::PlatformSelector::SpawnOculusPlayer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x16f1610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SpawnOculusPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.GetOculusOrgUserIdCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>*)>(&::VROSC::PlatformSelector::GetOculusOrgUserIdCallback)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x16f19b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "GetOculusOrgUserIdCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.OculusEntitlementCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)(::Oculus::Platform::Message*)>(&::VROSC::PlatformSelector::OculusEntitlementCallback)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16f1c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "OculusEntitlementCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.SetupCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::SetupCamera)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x16f0df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SetupCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector.CopyComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::VROSC::PlatformSelector::*)(::UnityEngine::Component*, ::UnityEngine::GameObject*)>(&::VROSC::PlatformSelector::CopyComponent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x16f1cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "CopyComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlatformSelector._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlatformSelector::*)()>(&::VROSC::PlatformSelector::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x16f1dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::VRPlayer>& VROSC::PlatformSelector::__cordl_internal_get__oculusPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oculusPrefab;
}
constexpr ::UnityW<::VROSC::VRPlayer> const& VROSC::PlatformSelector::__cordl_internal_get__oculusPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oculusPrefab;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__oculusPrefab(::UnityW<::VROSC::VRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::VRPlayer>& VROSC::PlatformSelector::__cordl_internal_get__steamPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steamPrefab;
}
constexpr ::UnityW<::VROSC::VRPlayer> const& VROSC::PlatformSelector::__cordl_internal_get__steamPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steamPrefab;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__steamPrefab(::UnityW<::VROSC::VRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::VRPlayer>& VROSC::PlatformSelector::__cordl_internal_get__debugPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugPrefab;
}
constexpr ::UnityW<::VROSC::VRPlayer> const& VROSC::PlatformSelector::__cordl_internal_get__debugPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugPrefab;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__debugPrefab(::UnityW<::VROSC::VRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::PlatformSelector_DebugSettings*& VROSC::PlatformSelector::__cordl_internal_get__debugSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugSettings;
}
constexpr ::VROSC::PlatformSelector_DebugSettings* const& VROSC::PlatformSelector::__cordl_internal_get__debugSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugSettings;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__debugSettings(::VROSC::PlatformSelector_DebugSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*>& VROSC::PlatformSelector::__cordl_internal_get__hmdProfiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmdProfiles;
}
constexpr ::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*> const& VROSC::PlatformSelector::__cordl_internal_get__hmdProfiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmdProfiles;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__hmdProfiles(::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmdProfiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV>& VROSC::PlatformSelector::__cordl_internal_get__liv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____liv;
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& VROSC::PlatformSelector::__cordl_internal_get__liv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____liv;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__liv(::UnityW<::LIV::SDK::Unity::LIV>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____liv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::PlatformSelector::__cordl_internal_get__bypassEntitlementCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypassEntitlementCheck;
}
constexpr bool const& VROSC::PlatformSelector::__cordl_internal_get__bypassEntitlementCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypassEntitlementCheck;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__bypassEntitlementCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypassEntitlementCheck = value;
}
constexpr uint64_t& VROSC::PlatformSelector::__cordl_internal_get__applicationUserID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applicationUserID;
}
constexpr uint64_t const& VROSC::PlatformSelector::__cordl_internal_get__applicationUserID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applicationUserID;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__applicationUserID(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applicationUserID = value;
}
constexpr bool& VROSC::PlatformSelector::__cordl_internal_get__waitingForUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForUserId;
}
constexpr bool const& VROSC::PlatformSelector::__cordl_internal_get__waitingForUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForUserId;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__waitingForUserId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitingForUserId = value;
}
constexpr ::UnityW<::VROSC::VRPlayer>& VROSC::PlatformSelector::__cordl_internal_get__VRPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VRPlayer_k__BackingField;
}
constexpr ::UnityW<::VROSC::VRPlayer> const& VROSC::PlatformSelector::__cordl_internal_get__VRPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VRPlayer_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__VRPlayer_k__BackingField(::UnityW<::VROSC::VRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____VRPlayer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::PlatformSelector::__cordl_internal_get__PlatformUID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformUID_k__BackingField;
}
constexpr ::StringW const& VROSC::PlatformSelector::__cordl_internal_get__PlatformUID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformUID_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__PlatformUID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlatformUID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::PlatformSelector::__cordl_internal_get__PlatformUsername_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformUsername_k__BackingField;
}
constexpr ::StringW const& VROSC::PlatformSelector::__cordl_internal_get__PlatformUsername_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformUsername_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__PlatformUsername_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlatformUsername_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::PlatformSelector_AgeCategory& VROSC::PlatformSelector::__cordl_internal_get__UserAgeCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserAgeCategory_k__BackingField;
}
constexpr ::VROSC::PlatformSelector_AgeCategory const& VROSC::PlatformSelector::__cordl_internal_get__UserAgeCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserAgeCategory_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__UserAgeCategory_k__BackingField(::VROSC::PlatformSelector_AgeCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserAgeCategory_k__BackingField = value;
}
constexpr bool& VROSC::PlatformSelector::__cordl_internal_get__HasPassedEntitlement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasPassedEntitlement_k__BackingField;
}
constexpr bool const& VROSC::PlatformSelector::__cordl_internal_get__HasPassedEntitlement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasPassedEntitlement_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__HasPassedEntitlement_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasPassedEntitlement_k__BackingField = value;
}
constexpr bool& VROSC::PlatformSelector::__cordl_internal_get__HasReceivedCallback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasReceivedCallback_k__BackingField;
}
constexpr bool const& VROSC::PlatformSelector::__cordl_internal_get__HasReceivedCallback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasReceivedCallback_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__HasReceivedCallback_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasReceivedCallback_k__BackingField = value;
}
constexpr ::VROSC::PlatformSelector_Platform& VROSC::PlatformSelector::__cordl_internal_get__CurrentPlatform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPlatform_k__BackingField;
}
constexpr ::VROSC::PlatformSelector_Platform const& VROSC::PlatformSelector::__cordl_internal_get__CurrentPlatform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPlatform_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__CurrentPlatform_k__BackingField(::VROSC::PlatformSelector_Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentPlatform_k__BackingField = value;
}
constexpr ::UnityW<::VROSC::HmdProfile>& VROSC::PlatformSelector::__cordl_internal_get__CurrentHmdProfile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentHmdProfile_k__BackingField;
}
constexpr ::UnityW<::VROSC::HmdProfile> const& VROSC::PlatformSelector::__cordl_internal_get__CurrentHmdProfile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentHmdProfile_k__BackingField;
}
constexpr void VROSC::PlatformSelector::__cordl_internal_set__CurrentHmdProfile_k__BackingField(::UnityW<::VROSC::HmdProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentHmdProfile_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PlatformSelector::setStaticF_OnPlayerInitialized(::System::Action_1<::UnityW<::VROSC::VRPlayer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::VROSC::VRPlayer>>*, "OnPlayerInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get>(std::forward<::System::Action_1<::UnityW<::VROSC::VRPlayer>>*>(value));
}
inline ::System::Action_1<::UnityW<::VROSC::VRPlayer>>* VROSC::PlatformSelector::getStaticF_OnPlayerInitialized()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::VROSC::VRPlayer>>*, "OnPlayerInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get>();
}
inline ::UnityW<::VROSC::VRPlayer> VROSC::PlatformSelector::get_VRPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_VRPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::VRPlayer>, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_VRPlayer(::VROSC::VRPlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_VRPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VRPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::PlatformSelector::get_PlatformUID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_PlatformUID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_PlatformUID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_PlatformUID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::PlatformSelector::get_PlatformUsername()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_PlatformUsername",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_PlatformUsername(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_PlatformUsername",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::PlatformSelector_AgeCategory VROSC::PlatformSelector::get_UserAgeCategory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_UserAgeCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PlatformSelector_AgeCategory, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_UserAgeCategory(::VROSC::PlatformSelector_AgeCategory  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_UserAgeCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlatformSelector_AgeCategory>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::PlatformSelector::get_HasPassedEntitlement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_HasPassedEntitlement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_HasPassedEntitlement(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_HasPassedEntitlement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::PlatformSelector::get_HasReceivedCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_HasReceivedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_HasReceivedCallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_HasReceivedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::PlatformSelector_Platform VROSC::PlatformSelector::get_CurrentPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_CurrentPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PlatformSelector_Platform, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_CurrentPlatform(::VROSC::PlatformSelector_Platform  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_CurrentPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlatformSelector_Platform>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::HmdProfile> VROSC::PlatformSelector::get_CurrentHmdProfile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "get_CurrentHmdProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::HmdProfile>, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::set_CurrentHmdProfile(::VROSC::HmdProfile*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "set_CurrentHmdProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HmdProfile*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::PlatformSelector::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::SetCurrentHmdProfile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SetCurrentHmdProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::GetOculusUserAgeCategory(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "GetOculusUserAgeCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void VROSC::PlatformSelector::SpawnChildPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SpawnChildPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlatformSelector::GetOculusUserCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "GetOculusUserCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void VROSC::PlatformSelector::SpawnOculusPlayer(bool  checkEntitlement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SpawnOculusPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, checkEntitlement);
}
inline void VROSC::PlatformSelector::GetOculusOrgUserIdCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>*  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "GetOculusOrgUserIdCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void VROSC::PlatformSelector::OculusEntitlementCallback(::Oculus::Platform::Message*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "OculusEntitlementCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void VROSC::PlatformSelector::SetupCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "SetupCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> VROSC::PlatformSelector::CopyComponent(::UnityEngine::Component*  original, ::UnityEngine::GameObject*  destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        "CopyComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method, original, destination);
}
inline void VROSC::PlatformSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlatformSelector*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlatformSelector* VROSC::PlatformSelector::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlatformSelector*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlatformSelector::PlatformSelector()   {
}
